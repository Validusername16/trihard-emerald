FortreeCity_DecorationShop_MapScripts:: @ 821800D
	.byte 0

FortreeCity_DecorationShop_EventScript_21800E:: @ 821800E
	msgbox FortreeCity_DecorationShop_Text_218078, MSGBOX_NPC
	end

FortreeCity_DecorationShop_EventScript_218017:: @ 8218017
	msgbox FortreeCity_DecorationShop_Text_2180ED, MSGBOX_NPC
	end

FortreeCity_DecorationShop_EventScript_218020:: @ 8218020
	lock
	faceplayer
	message gText_Mart_Welcome
	waitmessage
	pokemartdecoration FortreeCity_DecorationShop_PokemartDecor_Desks
	msgbox gText_Mart_Goodbye, MSGBOX_DIALOG
	release
	end

    .align 2
FortreeCity_DecorationShop_PokemartDecor_Desks: @ 8218038
	.2byte DECOR_SMALL_DESK
	.2byte DECOR_POKEMON_DESK
	.2byte DECOR_HEAVY_DESK
	.2byte DECOR_RAGGED_DESK
	.2byte DECOR_COMFORT_DESK
	.2byte DECOR_BRICK_DESK
	.2byte DECOR_CAMP_DESK
	.2byte DECOR_HARD_DESK
	.2byte DECOR_NONE
	release
	end

FortreeCity_DecorationShop_EventScript_21804C:: @ 821804C
	lock
	faceplayer
	message gText_Mart_Welcome
	waitmessage
	pokemartdecoration FortreeCity_DecorationShop_PokemartDecor_Chairs
	msgbox gText_Mart_Goodbye, MSGBOX_DIALOG
	release
	end

	.align 2
FortreeCity_DecorationShop_PokemartDecor_Chairs: @ 8218064
	.2byte DECOR_SMALL_CHAIR
	.2byte DECOR_POKEMON_CHAIR
	.2byte DECOR_HEAVY_CHAIR
	.2byte DECOR_RAGGED_CHAIR
	.2byte DECOR_COMFORT_CHAIR
	.2byte DECOR_BRICK_CHAIR
	.2byte DECOR_CAMP_CHAIR
	.2byte DECOR_HARD_CHAIR
	.2byte DECOR_NONE
	release
	end

FortreeCity_DecorationShop_Text_218078: @ 8218078
	.string "Merchandise you buy here is sent to\n"
	.string "your own PC.\p"
	.string "That's fantastic! I wish they could\n"
	.string "also deliver me home like that.$"

FortreeCity_DecorationShop_Text_2180ED: @ 82180ED
	.string "I'm buying a pretty desk and I'm\n"
	.string "putting my cute DOLLS on it.\p"
	.string "If I don't, when I decorate my\n"
	.string "SECRET BASE, my DOLLS will get\l"
	.string "dirty or poked with splinters.$"

