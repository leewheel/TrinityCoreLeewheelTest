-- TDB 442.25051 auth
UPDATE `updates` SET `state`='ARCHIVED',`speed`=0;
REPLACE INTO `updates_include` (`path`, `state`) VALUES ('$/sql/old/4.4.x/auth', 'ARCHIVED');
