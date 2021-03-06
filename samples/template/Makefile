PROGRAM = template
OVLOUT = template.ovl
VERSION = CZLE
ADDRESS = 0x80800000
OBJDUMP = mips64-objdump
PARTS = $(PROGRAM).o

CC   = @mips64-gcc
LD   = mips64-ld
NOVL = novl

CFLAGS = -Iinclude -G 0 -Os 						\
--std=gnu99 -mtune=vr4300 -mabi=32 -mips3			\
-mno-explicit-relocs -mno-memcpy -ffreestanding		\
-D$(VERSION)
										
LDFLAGS = -L$(Z64OVL_LD) -T z64ovl.ld --emit-relocs
NOVLFLAGS = -s -c -A $(ADDRESS) -o $(OVLOUT)

default: clean entry $(PROGRAM).ovl move

$(PROGRAM).ovl: $(PARTS)
	@$(LD) -o $(PROGRAM).elf $(PARTS) $(LDFLAGS)
	@$(NOVL) $(NOVLFLAGS) $(PROGRAM).elf
	@echo "Generated $(PROGRAM).elf"
	@echo "Compiling..."

entry:
	@echo -n "ENTRY_POINT = "$(ADDRESS) > entry.ld
	@echo ";" >> entry.ld
	@echo "Generated entry.ld"

symbols:
	@$(OBJDUMP) -t $(PROGRAM).elf > symbols.txt

move:
	@echo "Success!"
	@cp $(PROGRAM).ovl ../bin/$(PROGRAM).ovl
	@cp $(PROGRAM).ovl ~/Zelda/bin/$(PROGRAM).ovl
	@echo "Generated ../bin/$(PROGRAM).ovl"

clean:
	@rm -f $(PROGRAM).elf $(OVLOUT) $(PARTS) entry.ld