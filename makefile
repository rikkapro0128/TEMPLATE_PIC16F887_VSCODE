COMPILER = xc8-cc
OUTPUT = ./out
INCLUDE = ./main.c

run: 
	$(COMPILER) -mcpu=16f887 -std=C90 $(INCLUDE) -o $(OUTPUT)/template.hex
	