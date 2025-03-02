RustboroCity_PokemonSchool_MapScripts:: @ 8213EA8
	.byte 0

@ -----------------------------------------------------
@ Blackboard

RustboroCity_PokemonSchool_EventScript_213EA9:: @ 8213EA9
	lockall
	msgbox RustboroCity_PokemonSchool_Text_2140B2, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_213EB8
	end
RustboroCity_PokemonSchool_Text_2140B2: @ 82140B2
	.string "The blackboard lists status changes\n"
	.string "that may affect Pokémon in battle.$"

RustboroCity_PokemonSchool_EventScript_213EB8:: @ 8213EB8
	message RustboroCity_PokemonSchool_Text_2140F9
	waitmessage
	multichoicegrid 8, 1, 13, 3, 0
	switch VAR_RESULT
	case 0, RustboroCity_PokemonSchool_EventScript_213F17
	case 1, RustboroCity_PokemonSchool_EventScript_213F25
	case 2, RustboroCity_PokemonSchool_EventScript_213F33
	case 3, RustboroCity_PokemonSchool_EventScript_213F41
	case 4, RustboroCity_PokemonSchool_EventScript_213F4F
	case 5, Common_EventScript_ReleaseAllEnd
	case 127, Common_EventScript_ReleaseAllEnd
	end
RustboroCity_PokemonSchool_Text_2140F9: @ 82140F9
	.string "Which topic do you want to read?$"

RustboroCity_PokemonSchool_EventScript_213F17:: @ 8213F17
	msgbox RustboroCity_PokemonSchool_Text_21411A, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_213EB8
	end
RustboroCity_PokemonSchool_Text_21411A: @ 821411A
	.string "If a Pokémon is poisoned, it will\n"
	.string "steadily lose HP.\p"
	.string "The effects of poison remain after\n"
	.string "a battle.\p"
	.string "A poisoned Pokémon's HP will drop\n"
	.string "while it is traveling.\p"
	.string "Heal a poisoning using an ANTIDOTE.$"

RustboroCity_PokemonSchool_EventScript_213F25:: @ 8213F25
	msgbox RustboroCity_PokemonSchool_Text_2141D8, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_213EB8
	end
RustboroCity_PokemonSchool_Text_2141D8: @ 82141D8
	.string "If a Pokémon becomes paralyzed,\n"
	.string "its SPEED drops.\p"
	.string "It may also not be able to move while\n"
	.string "it is in battle.\p"
	.string "Paralysis remains after battle.\n"
	.string "Cure it using a PARLYZ HEAL.$"

RustboroCity_PokemonSchool_EventScript_213F33:: @ 8213F33
	msgbox RustboroCity_PokemonSchool_Text_21427D, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_213EB8
	end
RustboroCity_PokemonSchool_Text_21427D: @ 821427D
	.string "If a Pokémon falls asleep, it will be\n"
	.string "unable to attack.\p"
	.string "A Pokémon may wake up on its own,\n"
	.string "but if a battle ends while it is\l"
	.string "sleeping, it will stay asleep.\p"
	.string "Wake it up using an AWAKENING.$"

RustboroCity_PokemonSchool_EventScript_213F41:: @ 8213F41
	msgbox RustboroCity_PokemonSchool_Text_214336, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_213EB8
	end
RustboroCity_PokemonSchool_Text_214336: @ 8214336
	.string "A burn reduces ATTACK power, and it\n"
	.string "steadily reduces the victim's HP.\p"
	.string "A burn lingers after battle.\n"
	.string "Cure a burn using a BURN HEAL.$"

RustboroCity_PokemonSchool_EventScript_213F4F:: @ 8213F4F
	msgbox RustboroCity_PokemonSchool_Text_2143B8, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_213EB8
	end
RustboroCity_PokemonSchool_Text_2143B8: @ 82143B8
	.string "If a Pokémon is frozen, it becomes\n"
	.string "completely helpless.\p"
	.string "It will remain frozen after battle.\n"
	.string "Thaw it out using an ICE HEAL.$"

@ -----------------------------------------------------
@ People

RustboroCity_PokemonSchool_EventScript_213F5F:: @ 8213F5F
	msgbox RustboroCity_PokemonSchool_Text_21459F, MSGBOX_NPC
	end
RustboroCity_PokemonSchool_Text_21459F: @ 821459F
	.string "I'm trading Pokémon with my friend\n"
	.string "right now.$"


RustboroCity_PokemonSchool_EventScript_213F68:: @ 8213F68
	msgbox RustboroCity_PokemonSchool_Text_2145CD, MSGBOX_NPC
	end
RustboroCity_PokemonSchool_Text_2145CD: @ 82145CD
	.string "I always wanted a Seedot, and\n"
	.string "I'm finally getting one!$"


RustboroCity_PokemonSchool_EventScript_213F71:: @ 8213F71
	msgbox RustboroCity_PokemonSchool_Text_214604, MSGBOX_NPC
	end
RustboroCity_PokemonSchool_Text_214604: @ 8214604
	.string "Pokémon can hold items, but they\n"
	.string "don't know what to do with man-made\l"
	.string "items like Potion and Antidote.$"


RustboroCity_PokemonSchool_EventScript_213F7A:: @ 8213F7A
	msgbox RustboroCity_PokemonSchool_Text_214669, MSGBOX_NPC
	end
RustboroCity_PokemonSchool_Text_214669: @ 8214669
	.string "You know how some Pokémon moves can\n"
	.string "confuse a Pokémon?\p"
	.string "A confused Pokémon will sometimes\n"
	.string "attack itself without meaning to.\p"
	.string "But once it leaves battle, it will\n"
	.string "return to normal.$"


RustboroCity_PokemonSchool_EventScript_213F83:: @ 8213F83
	msgbox RustboroCity_PokemonSchool_Text_214719, MSGBOX_NPC
	end
RustboroCity_PokemonSchool_Text_214719: @ 8214719
	.string "A Pokémon holding a berry will heal\n"
	.string "itself…\p"
	.string "There are many kinds of items that\n"
	.string "Pokémon can hold…\p"
	.string "Boy, it sure is hard taking notes\n"
	.string "down…$"


RustboroCity_PokemonSchool_EventScript_213F8C:: @ 8213F8C
	msgbox RustboroCity_PokemonSchool_Text_2147A2, MSGBOX_DESCRIBE
	end
RustboroCity_PokemonSchool_Text_2147A2: @ 82147A2
	.string "It's this student's notebook…\p"
	.string "Pokémon are to be caught using\n"
	.string "Poké Balls.\p"
	.string "Up to six Pokémon can accompany\n"
	.string "a trainer.\p"
	.string "A trainer is someone who catches\n"
	.string "Pokémon, raises them, and battles\l"
	.string "with them.\p"
	.string "A trainer's mission is to defeat\n"
	.string "the strong trainers who await\l"
	.string "challengers in Pokémon Gyms.$"


RustboroCity_PokemonSchool_EventScript_213F95:: @ 8213F95
	lock
	faceplayer
	markasdialog
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_213FFB
	compare VAR_FACING, 4
	call_if_eq RustboroCity_PokemonSchool_EventScript_213FE5
	compare VAR_FACING, 3
	call_if_eq RustboroCity_PokemonSchool_EventScript_213FF0
	msgbox RustboroCity_PokemonSchool_Text_214433, MSGBOX_DEFAULT
	giveitem_std ITEM_QUICK_CLAW
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceDown
	waitmovement 0
	setflag FLAG_RECEIVED_QUICK_CLAW
	release
	end
RustboroCity_PokemonSchool_Text_214433: @ 8214433
	.string "Students who don't study get a little\n"
	.string "taste of my QUICK CLAW.\p"
	.string "Whether or not you are a good student \n"
	.string "will be evident from the way you use\l"
	.string "this item.$"

RustboroCity_PokemonSchool_EventScript_213FE5:: @ 8213FE5
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_214027
	waitmovement 0
	return
RustboroCity_PokemonSchool_Movement_214027: @ 8214027
	walk_right
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_in_place_fastest_down
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_fastest_left
	delay_16
	delay_16
	walk_right
	delay_16
	delay_16
	delay_8
	walk_up
	walk_right
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

RustboroCity_PokemonSchool_EventScript_213FF0:: @ 8213FF0
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_214010
	waitmovement 0
	return
RustboroCity_PokemonSchool_Movement_214010: @ 8214010
	walk_left
	walk_down
	walk_down
	walk_right
	walk_in_place_fastest_down
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_fastest_left
	delay_16
	delay_16
	walk_right
	delay_16
	delay_16
	delay_8
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	walk_right
	step_end

RustboroCity_PokemonSchool_EventScript_213FFB:: @ 8213FFB
	msgbox RustboroCity_PokemonSchool_Text_2144C8, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceDown
	waitmovement 0
	release
	end
RustboroCity_PokemonSchool_Text_2144C8: @ 82144C8
	.string "A Pokémon holding the QUICK CLAW will\n"
	.string "occasionally speed up and get to move\l"
	.string "before its opponent.\p"
	.string "There are many other items that are\n"
	.string "meant to be held by Pokémon.\p"
	.string "Just those alone will give you many\n"
	.string "topics to study!$"

