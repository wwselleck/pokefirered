CeruleanCity_House2_MapScripts:: @ 816A975
	.byte 0

CeruleanCity_House2_EventScript_Hiker:: @ 816A976
	lock
	faceplayer
	goto_if_set FLAG_GOT_TM28_FROM_ROCKET, CeruleanCity_House2_EventScript_HikerGotTM28
	msgbox CeruleanCity_House2_Text_RocketsStoleTMForDig
	release
	end

CeruleanCity_House2_EventScript_HikerGotTM28:: @ 816A98B
	msgbox CeruleanCity_House2_Text_TeachDiglettDigWithoutTM
	release
	end

CeruleanCity_House2_EventScript_Lass:: @ 816A995
	msgbox CeruleanCity_House2_Text_TeamRocketTryingToDigIntoNoGood, MSGBOX_NPC
	end

CeruleanCity_House2_EventScript_WallHole:: @ 816A99E
	msgbox CeruleanCity_House2_Text_TeamRocketLeftWayOut, MSGBOX_SIGN
	end

Script_Misty_Badge_Gate:: 
		lock
		faceplayer
		msgbox Text_Misty_Badge_Gate, MSGBOX_DEFAULT
		release
		end
		
Text_Misty_Badge_Gate:
	.string "Hey kid back off, this is a crime\n"
	.string "scene for crying out loud!\l"
	.string "Don't you have a gym leader to\l"
	.string "defeat or something?$"
