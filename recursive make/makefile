from := $(wildcard *.c)
to := $(patsubst %.c,%.o,$(from))
CC = gcc
CFLAGS = -Wall -Wextra -g
MODULES = anxin_module congnhan_module antrom_module

all:
	for dir in $(MODULES); do  \
		$(MAKE) -C $$dir; \
	done

.PHONY: clean
clean:
	for dir in $(MODULES); do  \
		$(MAKE) -C $$dir clean; \
	done
