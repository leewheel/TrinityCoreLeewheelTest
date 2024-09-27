#include "AreaTrigger.h"
#include "AreaTriggerAI.h"
#include "Containers.h"
#include "Conversation.h"
#include "CreatureAIImpl.h"
#include "CreatureGroups.h"
#include "MotionMaster.h"
#include "ObjectAccessor.h"
#include "PhasingHandler.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "ScriptedCreature.h"
#include "ScriptedGossip.h"
#include "SpellScript.h"
#include "TemporarySummon.h"
#include "WorldSession.h"
#include <Channel.h>

enum ElwynnForest
{
    INFANTRY_HELP_YELL = 49809,
    INFANTRY_COMBAT_YELL = 1,
    //生物
    NPC_BLACKROCK_BATTLE_WORG = 49871, //黑石战狼
    NPC_STORMWIND_INFANTRY = 49869, //暴风城步兵
    //战狼技能
    WORG_GROWL = 2649,

    //其他变量
    WORG_FIGHTING_FACTION = 232,
    WORG_FACTION_RESTORE = 32,
    AI_HEALTH_MIN = 85,
    INFANTRY_YELL_CHANCE = 10,

      /// Brother Paxton
    // Spells
    SPELL_FORTITUDE = 13864,//真言术：韧
    SPELL_PENANCE = 66097,//苦修
    SPELL_FLASH_HEAL = 38588,//快速治疗
    SPELL_RENEW = 8362, //恢复
    SPELL_REVIVE = 93799, //复苏
    // Texts
    BROTHER_PAXTON_TEXT = 0,
    BROTHER_PAXTON_TEXT_PLAYER = 1,
    // Events
    BROTHER_PAXTON_HEAL_EVENT_01 = 0,
    BROTHER_PAXTON_HEAL_EVENT_02 = 1,
    BROTHER_PAXTON_HEAL_EVENT_03 = 2,
    BROTHER_PAXTON_HEAL_EVENT_04 = 3,
    HEAL_EVENT_01_STEP_01 = 1,
    HEAL_EVENT_01_STEP_02 = 2,
    HEAL_EVENT_01_STEP_03 = 3,
    HEAL_EVENT_01_STEP_04 = 4,
    HEAL_EVENT_02_STEP_01 = 5,
    HEAL_EVENT_02_STEP_02 = 6,
    HEAL_EVENT_02_STEP_03 = 7,
    HEAL_EVENT_02_STEP_04 = 8,
    HEAL_EVENT_03_STEP_01 = 9,
    HEAL_EVENT_03_STEP_02 = 10,
    HEAL_EVENT_03_STEP_03 = 11,
    HEAL_EVENT_03_STEP_04 = 12,
    HEAL_EVENT_04_STEP_01 = 13,
    HEAL_EVENT_04_STEP_02 = 14,
    HEAL_EVENT_04_STEP_03 = 15,
    HEAL_EVENT_04_STEP_04 = 16,
    HEAL_EVENT_RESET = 17,
};


struct npc_stormwind_infantry : public ScriptedAI
{
  npc_stormwind_infantry(Creature* creature) : ScriptedAI(creature)
  {
     me->SetEmoteState(EMOTE_STATE_READY1H);
  }

  uint32 tSeek, cYell, tYell;

  void Reset() override
  {
    me->SetEmoteState(EMOTE_STATE_READY1H);
    tSeek = urand(1 * TimeConstants::IN_MILLISECONDS, 2 * TimeConstants::IN_MILLISECONDS);
    cYell = urand(0, 100);
    tYell = urand(5 * TimeConstants::IN_MILLISECONDS, 60 * TimeConstants::IN_MILLISECONDS);
  }

  void DamageTaken(Unit* who, uint32& damage, DamageEffectType /*damageType*/, SpellInfo const* /*spellInfo = nullptr*/) override
  {
    if (who->GetTypeId() == TYPEID_PLAYER)
    {
      me->GetThreatManager().ResetThreat(me->GetVictim());
      AddThreat(me, 1.0f);
      AddThreat(who, 1.0f);
      me->AI()->AttackStart(who);
    }
    else if (who->IsPet())
    {
      me->GetThreatManager().ResetThreat(me->GetVictim());
      AddThreat(who, 1.0f);
      me->AI()->AttackStart(who);
    }

    if (who->GetEntry() == ElwynnForest::NPC_BLACKROCK_BATTLE_WORG && me->HealthBelowPct(ElwynnForest::AI_HEALTH_MIN))
    {
      damage = 0;
      AddThreat(who, 1.0f);
      me->AI()->AttackStart(who);
    }
  }

  void UpdateAI(uint32 diff) override
  {
    if (!UpdateVictim())
      return;
    else
    {
      if (tYell <= diff)
      {
        if (cYell < ElwynnForest::INFANTRY_YELL_CHANCE)
        {
          // 随机取得从49804-49809中的一个数值
          uint32 randomYellId = urand(49804, 49809);
          me->Yell(randomYellId, nullptr);
          //me->Yell(INFANTRY_HELP_YELL,nullptr);
          tYell = urand(10 * TimeConstants::IN_MILLISECONDS, 120 * TimeConstants::IN_MILLISECONDS);
        }
        else
          tYell = urand(10 * TimeConstants::IN_MILLISECONDS, 120 * TimeConstants::IN_MILLISECONDS);
      }
      else
      {
        tYell -= diff;
        me->DoMeleeAttackIfReady();
      }
    }
  }
};


struct npc_blackrock_battle_worg : public ScriptedAI
{
  npc_blackrock_battle_worg(Creature* creature) : ScriptedAI(creature) { }

  uint32 tSeek, tGrowl;

  void Reset() override
  {
    tSeek = urand(1 * TimeConstants::IN_MILLISECONDS, 2 * TimeConstants::IN_MILLISECONDS);
    tGrowl = urand(8 * TimeConstants::IN_MILLISECONDS + 500, 10 * TimeConstants::IN_MILLISECONDS);
    me->SetFaction(ElwynnForest::WORG_FACTION_RESTORE);
  }

  void DamageTaken(Unit* who, uint32& damage, DamageEffectType /*damageType*/, SpellInfo const* /*spellInfo = nullptr*/) override 
  {
    if (who->GetTypeId() == TYPEID_PLAYER)  // 判断 who 的类型 ID 是否为 TYPEID_PLAYER（玩家类型）
    {
      //me->GetThreatManager().ResetThreat(me->GetVictim());  // 重置当前单位的所有仇恨值
      
      AddThreat(who, 1.0f);  // 将玩家的仇恨值添加到当前单位身上，值为1.0f
      me->AI()->AttackStart(who);  // 启动当前单位的 AI 攻击玩家
    }
    else if (who->IsPet())  // 判断 who 是否是宠物
    {
      //me->GetThreatManager().ResetThreat(me->GetVictim());   // 重置当前单位的所有仇恨值
      AddThreat(who, 1.0f);  // 将宠物的仇恨值添加到当前单位身上，值为1.0f
      me->AI()->AttackStart(who);  // 启动当前单位的 AI 攻击宠物
    }

    if (who->GetEntry() == ElwynnForest::NPC_STORMWIND_INFANTRY && me->HealthBelowPct(ElwynnForest::AI_HEALTH_MIN))
      // 判断 who 的 Entry ID 是否为 NPC_STORMWIND_INFANTRY 并且当前单位的血量是否低于 AI_HEALTH_MIN
    {
      damage = 0;  // 将 damage 设置为0
      AddThreat(who, 1.0f);  // 将 who 的仇恨值添加到当前单位身上，值为1.0f
      me->AI()->AttackStart(who);  // 启动当前单位的 AI 攻击 who
    }
  }


  void UpdateAI(uint32 diff) override
  {
    if (tSeek <= diff)
    {
      if ((me->IsAlive()) && (!me->IsInCombat() && (me->GetDistance2d(me->GetHomePosition().GetPositionX(), me->GetHomePosition().GetPositionY()) <= 1.0f)))
        if (Creature* enemy = me->FindNearestCreature(ElwynnForest::NPC_STORMWIND_INFANTRY, 1.0f, true))
        {
          me->SetFaction(ElwynnForest::WORG_FIGHTING_FACTION);
          me->AI()->AttackStart(enemy);
          tSeek = urand(1 * TimeConstants::IN_MILLISECONDS, 2 * TimeConstants::IN_MILLISECONDS);
        }
    }
    else
      tSeek -= diff;

    if (UpdateVictim())
    {
      if (tGrowl <= diff)
      {
        DoCast(me->GetVictim(), ElwynnForest::WORG_GROWL);
        tGrowl = urand(8 * TimeConstants::IN_MILLISECONDS + 500, 10 * TimeConstants::IN_MILLISECONDS);
      }
      else
      {
        tGrowl -= diff;
        me->DoMeleeAttackIfReady();
      }
    }
    else
    {
      me->SetFaction(ElwynnForest::WORG_FACTION_RESTORE);
      return;
    }
  }
};


struct npc_brother_paxton : public ScriptedAI
{
  npc_brother_paxton(Creature* c) : ScriptedAI(c) { }

  EventMap _events;

  uint32 _cooldownTimer;

  bool _cooldown;

  void Reset() override
  {
    _events.Reset();

    me->SetUnitFlag(UNIT_FLAG_IMMUNE_TO_PC | UNIT_FLAG_IMMUNE_TO_NPC);
    DoCast(me, ElwynnForest::SPELL_FORTITUDE);
    me->InitializeReactState();

    _cooldown = false;
    _cooldownTimer = 0;
  }

  //void EnterEvadeMode() 
  //{
  //  return;
  //}

  void MoveInLineOfSight(Unit* p_Who) override
  {
    if (me->GetDistance(p_Who) < 15.0f)
    {
      if (p_Who && p_Who->GetTypeId() == TYPEID_PLAYER && !p_Who->HasAura(ElwynnForest::SPELL_FORTITUDE) && !_cooldown)
      {
        if (roll_chance_i(30))
        {
          _cooldown = true;
          me->CastSpell(p_Who, ElwynnForest::SPELL_FORTITUDE);
          me->CastSpell(p_Who, ElwynnForest::SPELL_RENEW, true);
          me->Say(BROTHER_PAXTON_TEXT_PLAYER, p_Who);
        }
      }
    }
  }

  void JustEngagedWith(Unit* /*p_Who*/) override
  {
    return;
  }

  void MovementInform(uint32 p_Type, uint32 p_ID) override
  {
    if (p_Type == 2 && p_ID == 5 || p_ID == 14 || p_ID == 22 || p_ID == 33 || p_ID == 40 || p_ID == 51 || p_ID == 60 || p_ID == 62)
    {
      switch (urand(ElwynnForest::BROTHER_PAXTON_HEAL_EVENT_01, ElwynnForest::BROTHER_PAXTON_HEAL_EVENT_04))
      {
      case ElwynnForest::BROTHER_PAXTON_HEAL_EVENT_01:
        _events.ScheduleEvent(ElwynnForest::HEAL_EVENT_01_STEP_01, 500ms);
        break;
      case ElwynnForest::BROTHER_PAXTON_HEAL_EVENT_02:
        _events.ScheduleEvent(ElwynnForest::HEAL_EVENT_02_STEP_01, 500ms);
        break;
      case ElwynnForest::BROTHER_PAXTON_HEAL_EVENT_03:
        _events.ScheduleEvent(ElwynnForest::HEAL_EVENT_03_STEP_01, 500ms);
        break;
      case ElwynnForest::BROTHER_PAXTON_HEAL_EVENT_04:
        _events.ScheduleEvent(ElwynnForest::HEAL_EVENT_04_STEP_01, 500ms);
        break;
      }
    }
  }

  void UpdateAI(const uint32 diff) override
  {
    if (_cooldownTimer <= diff)
    {
      _cooldown = false;
      _cooldownTimer = 20 * TimeConstants::IN_MILLISECONDS;
    }
    else _cooldownTimer -= diff;

    _events.Update(diff);
    uint32 stormwind_infantry_textId = GetRandomTextId(NPC_STORMWIND_INFANTRY);

    uint32 brother_paxton_textId = GetRandomTextId(me->GetEntry());

    switch (_events.ExecuteEvent())
    {
    case ElwynnForest::HEAL_EVENT_01_STEP_01:
      me->SetReactState(ReactStates::REACT_PASSIVE);

      if (Creature* stormwind_infantry = me->FindNearestCreature(ElwynnForest::NPC_STORMWIND_INFANTRY, 6.0f))
      stormwind_infantry->AI()->Talk(stormwind_infantry_textId);
      _events.ScheduleEvent(ElwynnForest::HEAL_EVENT_01_STEP_02, 1s);
      break;
    case ElwynnForest::HEAL_EVENT_01_STEP_02:
      if (Creature* stormwind_infantry = me->FindNearestCreature(ElwynnForest::NPC_STORMWIND_INFANTRY, 6.0f))
        me->SetFacingTo(me->GetAbsoluteAngle(stormwind_infantry));
      _events.ScheduleEvent(ElwynnForest::HEAL_EVENT_01_STEP_03, 2s);
      break;
    case ElwynnForest::HEAL_EVENT_01_STEP_03:
      Talk(brother_paxton_textId);
      _events.ScheduleEvent(ElwynnForest::HEAL_EVENT_01_STEP_04, 1s);
      break;
    case ElwynnForest::HEAL_EVENT_01_STEP_04:
      if (Creature* stormwind_infantry = me->FindNearestCreature(ElwynnForest::NPC_STORMWIND_INFANTRY, 6.0f))
        me->CastSpell(stormwind_infantry, ElwynnForest::SPELL_PENANCE);
      _events.ScheduleEvent(ElwynnForest::HEAL_EVENT_RESET, 4s);
      break;
    case ElwynnForest::HEAL_EVENT_02_STEP_01:
      me->SetReactState(ReactStates::REACT_PASSIVE);

      if (Creature* stormwind_infantry = me->FindNearestCreature(ElwynnForest::NPC_STORMWIND_INFANTRY, 6.0f))
       stormwind_infantry->AI()->Talk(stormwind_infantry_textId);
      _events.ScheduleEvent(ElwynnForest::HEAL_EVENT_02_STEP_02, 1s);
      break;
    case HEAL_EVENT_02_STEP_02:
      if (Creature* stormwind_infantry = me->FindNearestCreature(ElwynnForest::NPC_STORMWIND_INFANTRY, 6.0f))
        me->SetFacingTo(me->GetAbsoluteAngle(stormwind_infantry));
      _events.ScheduleEvent(ElwynnForest::HEAL_EVENT_02_STEP_03, 2s);
      break;
    case ElwynnForest::HEAL_EVENT_02_STEP_03:
      Talk(brother_paxton_textId);
      _events.ScheduleEvent(ElwynnForest::HEAL_EVENT_02_STEP_04, 1s);
      break;
    case ElwynnForest::HEAL_EVENT_02_STEP_04:
      if (Creature* stormwind_infantry = me->FindNearestCreature(ElwynnForest::NPC_STORMWIND_INFANTRY, 6.0f))
        me->CastSpell(stormwind_infantry, ElwynnForest::SPELL_FLASH_HEAL);
      _events.ScheduleEvent(ElwynnForest::HEAL_EVENT_RESET, 4s);
      break;
    case ElwynnForest::HEAL_EVENT_03_STEP_01:
      me->SetReactState(ReactStates::REACT_PASSIVE);

      if (Creature* stormwind_infantry = me->FindNearestCreature(ElwynnForest::NPC_STORMWIND_INFANTRY, 6.0f))
      stormwind_infantry->AI()->Talk(stormwind_infantry_textId);
      _events.ScheduleEvent(ElwynnForest::HEAL_EVENT_03_STEP_02, 1s);
      break;
    case ElwynnForest::HEAL_EVENT_03_STEP_02:
      if (Creature* stormwind_infantry = me->FindNearestCreature(ElwynnForest::NPC_STORMWIND_INFANTRY, 6.0f))
        me->SetFacingTo(me->GetAbsoluteAngle(stormwind_infantry));
      _events.ScheduleEvent(ElwynnForest::HEAL_EVENT_03_STEP_03, 2s);
      break;
    case ElwynnForest::HEAL_EVENT_03_STEP_03:
      Talk(brother_paxton_textId);
      _events.ScheduleEvent(ElwynnForest::HEAL_EVENT_03_STEP_04, 1s);
      break;
    case ElwynnForest::HEAL_EVENT_03_STEP_04:
      if (Creature* stormwind_infantry = me->FindNearestCreature(ElwynnForest::NPC_STORMWIND_INFANTRY, 6.0f))
        me->CastSpell(stormwind_infantry, ElwynnForest::SPELL_RENEW);
      _events.ScheduleEvent(ElwynnForest::HEAL_EVENT_RESET, 4s);
      break;
    case ElwynnForest::HEAL_EVENT_04_STEP_01:
      me->SetReactState(ReactStates::REACT_PASSIVE);

      if (Creature* stormwind_infantry = me->FindNearestCreature(ElwynnForest::NPC_STORMWIND_INFANTRY, 6.0f))
      stormwind_infantry->AI()->Talk(stormwind_infantry_textId);
      _events.ScheduleEvent(ElwynnForest::HEAL_EVENT_04_STEP_02, 1s);
      break;
    case ElwynnForest::HEAL_EVENT_04_STEP_02:
      if (Creature* stormwind_infantry = me->FindNearestCreature(ElwynnForest::NPC_STORMWIND_INFANTRY, 6.0f))
        me->SetFacingTo(me->GetAbsoluteAngle(stormwind_infantry));
      _events.ScheduleEvent(ElwynnForest::HEAL_EVENT_04_STEP_03, 2s);
      break;
    case ElwynnForest::HEAL_EVENT_04_STEP_03:
      Talk(brother_paxton_textId);
      _events.ScheduleEvent(ElwynnForest::HEAL_EVENT_04_STEP_04, 1s);
      break;
    case ElwynnForest::HEAL_EVENT_04_STEP_04:
      if (Creature* stormwind_infantry = me->FindNearestCreature(ElwynnForest::NPC_STORMWIND_INFANTRY, 6.0f))
        me->CastSpell(stormwind_infantry, ElwynnForest::SPELL_REVIVE);
      _events.ScheduleEvent(ElwynnForest::HEAL_EVENT_RESET, 4s);
      break;
    case ElwynnForest::HEAL_EVENT_RESET:
      me->ClearInCombat();
      Reset();
      break;
    default:
      break;
    }

    if (!UpdateVictim())
      return;

    me->DoMeleeAttackIfReady();
  }
  private:

    EventMap events;
    static const uint32 EVENT_RANDOM_TEXT = 1;

    uint32 GetRandomTextId(uint32 creatureId)
    {
      // Query to get random text ID from creature_text table
      std::string query = "SELECT ID FROM creature_text WHERE CreatureID = " + std::to_string(creatureId) + " ORDER BY RAND() LIMIT 1";
      QueryResult result = WorldDatabase.Query(query.c_str());
      if (result)
      {
        Field* fields = result->Fetch();
        return fields[0].GetUInt32();
      }
      return 0;
    }
    // 
    //float GetAngle(Position const* pos) const;
    //float Position::GetAngle(const Position* obj) const
    //{
    //  if (!obj)
    //    return 0;

    //  return GetAngle(obj->GetPositionX(), obj->GetPositionY());
    //}
};



void AddSC_elwynn_forest_Fix()
{
  RegisterCreatureAI(npc_stormwind_infantry);
  RegisterCreatureAI(npc_blackrock_battle_worg);
  RegisterCreatureAI(npc_brother_paxton);
}
