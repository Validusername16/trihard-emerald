AS := tools/binutils/bin/arm-none-eabi-as
CPP := $(CC) -E
LD := tools/binutils/bin/arm-none-eabi-ld
OBJCOPY := tools/binutils/bin/arm-none-eabi-objcopy
NM := nm

# Build Variables
DEBUG			?= 1
TPP_MODE		?= 1
EMULATOR_ONLY	?= 1

# Version branch
VERSION	:= 1.0.0

ifeq ($(OS),Windows_NT)
EXE := .exe
else
EXE :=
endif

TITLE       := TRIHARD EMER #POKEMON EMER
GAME_CODE   := BPEE #THEE
GAME_NAME	:= TriHard Emerald (English)
MAKER_CODE  := 01
REVISION    := 0

SHELL := /bin/bash -o pipefail

ROM := trihardemerald.gba
OBJ_DIR := build/emerald

ELF = $(ROM:.gba=.elf)
MAP = $(ROM:.gba=.map)
SYM = $(ROM:.gba=.sym)
PGEINI := $(ROM:%.gba=%.pge.ini)

C_SUBDIR = src
ASM_SUBDIR = asm
DATA_ASM_SUBDIR = data
SONG_SUBDIR = sound/songs
MID_SUBDIR = sound/songs/midi

C_BUILDDIR = $(OBJ_DIR)/$(C_SUBDIR)
ASM_BUILDDIR = $(OBJ_DIR)/$(ASM_SUBDIR)
DATA_ASM_BUILDDIR = $(OBJ_DIR)/$(DATA_ASM_SUBDIR)
SONG_BUILDDIR = $(OBJ_DIR)/$(SONG_SUBDIR)
MID_BUILDDIR = $(OBJ_DIR)/$(MID_SUBDIR)

CC1             := tools/agbcc/bin/agbcc$(EXE)

ASFLAGS := -mcpu=arm7tdmi --defsym DEBUG=$(DEBUG) --defsym TPP_MODE=$(TPP_MODE) --defsym EMULATOR_ONLY=$(EMULATOR_ONLY)
override CFLAGS += -mthumb-interwork -Wimplicit -Wparentheses -Werror -O2 -fhex-asm
CPPFLAGS := -I tools/agbcc/include -I tools/agbcc -iquote include -Wno-trigraphs -D DEBUG=$(DEBUG) -D TPP_MODE=$(TPP_MODE) -D EMULATOR_ONLY=$(EMULATOR_ONLY) -nostdinc -undef

LDFLAGS = -Map ../../$(MAP)

LIB := -L ../../tools/agbcc/lib -lgcc -lc

GFX := tools/gbagfx/gbagfx$(EXE)
AIF := tools/aif2pcm/aif2pcm$(EXE)
MID := tools/mid2agb/mid2agb$(EXE)
SCANINC := tools/scaninc/scaninc$(EXE)
PREPROC := tools/preproc/preproc$(EXE)
RAMSCRGEN := tools/ramscrgen/ramscrgen$(EXE)
FIX := tools/gbafix/gbafix$(EXE)
MAPJSON := tools/mapjson/mapjson$(EXE)
COPYSTAMP := tools/copystamp/copystamp$(EXE)
PGEGEN    := tools/pgegen/pgegen$(EXE)

# Clear the default suffixes
.SUFFIXES:
# Don't delete intermediate files
.SECONDARY:
# Delete files that weren't built properly
.DELETE_ON_ERROR:

# Secondary expansion is required for dependency variables in object rules.
.SECONDEXPANSION:

.PHONY: rom clean compare tidy tools

C_SRCS := $(wildcard $(C_SUBDIR)/*.c $(C_SUBDIR)/*/*.c $(C_SUBDIR)/*/*/*.c)
C_OBJS := $(patsubst $(C_SUBDIR)/%.c,$(C_BUILDDIR)/%.o,$(C_SRCS))

ASM_SRCS := $(wildcard $(ASM_SUBDIR)/*.s)
ASM_OBJS := $(patsubst $(ASM_SUBDIR)/%.s,$(ASM_BUILDDIR)/%.o,$(ASM_SRCS))

DATA_ASM_SRCS := $(wildcard $(DATA_ASM_SUBDIR)/*.s)
DATA_ASM_OBJS := $(patsubst $(DATA_ASM_SUBDIR)/%.s,$(DATA_ASM_BUILDDIR)/%.o,$(DATA_ASM_SRCS))

SONG_SRCS := $(wildcard $(SONG_SUBDIR)/*.s)
SONG_OBJS := $(patsubst $(SONG_SUBDIR)/%.s,$(SONG_BUILDDIR)/%.o,$(SONG_SRCS))

MID_SRCS := $(wildcard $(MID_SUBDIR)/*.mid)
MID_OBJS := $(patsubst $(MID_SUBDIR)/%.mid,$(MID_BUILDDIR)/%.o,$(MID_SRCS))

OBJS     := $(C_OBJS) $(ASM_OBJS) $(DATA_ASM_OBJS) $(SONG_OBJS) $(MID_OBJS)
OBJS_REL := $(patsubst $(OBJ_DIR)/%,%,$(OBJS))

SUBDIRS  := $(sort $(dir $(OBJS)))

$(shell mkdir -p $(SUBDIRS))

infoshell = $(foreach line, $(shell $1 | sed "s/ /__SPACE__/g"), $(info $(subst __SPACE__, ,$(line))))

# Build tools when building the rom
# Disable dependency scanning for clean/tidy/tools
ifeq (,$(filter-out all,$(MAKECMDGOALS)))
$(call infoshell, $(MAKE) tools)
else
NODEP := 1
endif

rom: $(ROM)

ini: $(PGEINI)

tools:
	@$(MAKE) -C tools/gbagfx
	@$(MAKE) -C tools/scaninc
	@$(MAKE) -C tools/preproc
	@$(MAKE) -C tools/bin2c
	@$(MAKE) -C tools/rsfont
	@$(MAKE) -C tools/aif2pcm
	@$(MAKE) -C tools/ramscrgen
	@$(MAKE) -C tools/mid2agb
	@$(MAKE) -C tools/gbafix
	@$(MAKE) -C tools/mapjson
	@$(MAKE) -C tools/copystamp
	@$(MAKE) -C tools/pgegen

clean: tidy cleanmaps
	rm -f sound/direct_sound_samples/*.bin
	rm -f $(SONG_OBJS) $(MID_OBJS) $(MID_SUBDIR)/*.s
	find . \( -iname '*.1bpp' -o -iname '*.4bpp' -o -iname '*.8bpp' -o -iname '*.gbapal' -o -iname '*.lz' -o -iname '*.latfont' -o -iname '*.hwjpnfont' -o -iname '*.fwjpnfont' \) -exec rm {} +
	rm -f $(DATA_ASM_SUBDIR)/layouts/layouts.inc $(DATA_ASM_SUBDIR)/layouts/layouts_table.inc
	@$(MAKE) clean -C tools/gbagfx
	@$(MAKE) clean -C tools/scaninc
	@$(MAKE) clean -C tools/preproc
	@$(MAKE) clean -C tools/bin2c
	@$(MAKE) clean -C tools/rsfont
	@$(MAKE) clean -C tools/aif2pcm
	@$(MAKE) clean -C tools/ramscrgen
	@$(MAKE) clean -C tools/mid2agb
	@$(MAKE) clean -C tools/gbafix
	@$(MAKE) clean -C tools/mapjson
	@$(MAKE) clean -C tools/copystamp
	@$(MAKE) clean -C tools/pgegen	

cleanmaps:
	rm -f $(DATA_ASM_BUILDDIR)/maps.o $(DATA_ASM_BUILDDIR)/map_events.o
	rm -f $(DATA_ASM_SUBDIR)/maps/connections.inc $(DATA_ASM_SUBDIR)/maps/events.inc $(DATA_ASM_SUBDIR)/maps/groups.inc $(DATA_ASM_SUBDIR)/maps/headers.inc
	find $(DATA_ASM_SUBDIR)/maps \( -iname 'connections.inc' -o -iname 'events.inc' -o -iname 'header.inc' \) -exec rm {} +

tidy:
	rm -f $(ROM) $(ELF) $(MAP) $(SYM)
	rm -r build/*

include graphics_file_rules.mk
include map_data_rules.mk
include spritesheet_rules.mk
include songs.mk

%.s: ;
%.png: ;
%.pal: ;
%.aif: ;

%.1bpp: %.png  ; $(GFX) $< $@
%.4bpp: %.png  ; $(GFX) $< $@
%.8bpp: %.png  ; $(GFX) $< $@
%.gbapal: %.pal ; $(GFX) $< $@
%.gbapal: %.png ; $(GFX) $< $@
%.lz: % ; $(GFX) $< $@
%.rl: % ; $(GFX) $< $@
sound/direct_sound_samples/cry_%.bin: sound/direct_sound_samples/cry_%.aif ; $(AIF) $< $@ --compress
sound/%.bin: sound/%.aif ; $(AIF) $< $@

$(OBJ_DIR)/copystamp.bin: .git/index
	$(COPYSTAMP) $(OBJ_DIR)/copystamped.bin `git log -1 --format="-18:s $(VERSION)*%h -19:t %ct"`
$(OBJ_DIR)/copystamped.bin.lz: $(OBJ_DIR)/copystamp.bin
	$(GFX) $(OBJ_DIR)/copystamped.bin $@


$(C_BUILDDIR)/libc.o: CC1 := tools/agbcc/bin/old_agbcc
$(C_BUILDDIR)/libc.o: CFLAGS := -O2

$(C_BUILDDIR)/siirtc.o: CFLAGS := -mthumb-interwork

$(C_BUILDDIR)/agb_flash.o: CFLAGS := -O -mthumb-interwork
$(C_BUILDDIR)/agb_flash_1m.o: CFLAGS := -O -mthumb-interwork
$(C_BUILDDIR)/agb_flash_mx.o: CFLAGS := -O -mthumb-interwork

$(C_BUILDDIR)/m4a.o: CC1 := tools/agbcc/bin/old_agbcc

$(C_BUILDDIR)/record_mixing.o: CFLAGS += -ffreestanding

$(C_BUILDDIR)/graphics.o: $(OBJ_DIR)/copystamped.bin.lz

ifeq ($(NODEP),1)
$(C_BUILDDIR)/%.o: c_dep :=
else
$(C_BUILDDIR)/%.o: c_dep = $(shell $(SCANINC) -I include $(C_SUBDIR)/$*.c)
endif

ifeq ($(DINFO),1)
override CFLAGS += -g
endif

$(C_BUILDDIR)/%.o : $(C_SUBDIR)/%.c $$(c_dep)
	@$(CPP) $(CPPFLAGS) $< -o $(C_BUILDDIR)/$*.i
	@$(PREPROC) $(C_BUILDDIR)/$*.i charmap.txt | $(CC1) $(CFLAGS) -o $(C_BUILDDIR)/$*.s
	@echo -e ".text\n\t.align\t2, 0\n" >> $(C_BUILDDIR)/$*.s
	$(AS) $(ASFLAGS) -o $@ $(C_BUILDDIR)/$*.s

ifeq ($(NODEP),1)
$(ASM_BUILDDIR)/%.o: asm_dep :=
else
$(ASM_BUILDDIR)/%.o: asm_dep = $(shell $(SCANINC) -I "" $(ASM_SUBDIR)/$*.s)
endif

$(ASM_BUILDDIR)/%.o: $(ASM_SUBDIR)/%.s $$(asm_dep)
	$(AS) $(ASFLAGS) -o $@ $<

ifeq ($(NODEP),1)
$(DATA_ASM_BUILDDIR)/%.o: data_dep :=
else
$(DATA_ASM_BUILDDIR)/%.o: data_dep = $(shell $(SCANINC) -I include -I "" $(DATA_ASM_SUBDIR)/$*.s)
endif

$(DATA_ASM_BUILDDIR)/%.o: $(DATA_ASM_SUBDIR)/%.s $$(data_dep)
	$(PREPROC) $< charmap.txt | $(CPP) -I include - | $(AS) $(ASFLAGS) -o $@

$(SONG_BUILDDIR)/%.o: $(SONG_SUBDIR)/%.s
	$(AS) $(ASFLAGS) -I sound -o $@ $<

$(OBJ_DIR)/sym_bss.ld: sym_bss.txt
	$(RAMSCRGEN) .bss $< ENGLISH > $@

$(OBJ_DIR)/sym_common.ld: sym_common.txt $(C_OBJS) $(wildcard common_syms/*.txt)
	$(RAMSCRGEN) COMMON $< ENGLISH -c $(C_BUILDDIR),common_syms > $@

$(OBJ_DIR)/sym_ewram.ld: sym_ewram.txt
	$(RAMSCRGEN) ewram_data $< ENGLISH > $@

$(OBJ_DIR)/ld_script.ld: ld_script.txt $(OBJ_DIR)/sym_bss.ld $(OBJ_DIR)/sym_common.ld $(OBJ_DIR)/sym_ewram.ld
	cd $(OBJ_DIR) && sed "s#tools/#../../tools/#g" ../../ld_script.txt > ld_script.ld

$(ELF): $(OBJ_DIR)/ld_script.ld $(OBJS)
	cd $(OBJ_DIR) && ../../$(LD) $(LDFLAGS) -T ld_script.ld -o ../../$@ $(OBJS_REL) $(LIB)

$(ROM): $(ELF)
	$(OBJCOPY) -O binary $< $@
	$(FIX) $@ -p -t"$(TITLE)" -c$(GAME_CODE) -m$(MAKER_CODE) -r$(REVISION) --silent
	$(NM) -SBgn $< > $(SYM)

$(PGEINI): %.pge.ini: $(ELF)
	$(PGEGEN) $< $@ --code $(GAME_CODE) --name "$(GAME_NAME)"