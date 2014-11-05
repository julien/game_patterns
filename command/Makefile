SHELL := /bin/bash
CC := g++
CFLAGS := -O3
SRC  := src/main.cpp
BIN  := bin/a.out

default: clean $(BIN) run clean

clean:
	-@rm -fr bin

$(BIN): $(SRC)
	mkdir -p $(@D)
	$(CC) -o $@ $< src/actor.cpp src/inputhandler.cpp src/game.cpp $(CFLAGS)


run: $(BIN)
	@./$<


.PHONY: clean run

