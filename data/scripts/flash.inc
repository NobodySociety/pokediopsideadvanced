EventScript_UseFlash::
	msgbox Text_PlayerUsedLantern, MSGBOX_DEFAULT
	animateflash 1
	setflashlevel 1
	closemessage
	end

Text_PlayerUsedLantern:
	.string "{PLAYER} used the Lantern!$"
