# gcc
CC = gcc

INCLUDES =

# -g debugging
# -Wall all warnings
CFLAGS = -g -Wall $(INCLUDES)

# linking  -g debugging
LDFLAGS = -g

# libraries
LDLIBS = -lm

# build targets
main: main.o gcd.o prime.o
main.o: main.c gcd.h prime.h
gcd.o: gcd.c gcd.h
prime.o: prime.c prime.h

# clean targets
.PHONY: clean
clean:
	rm -f *.o *~ core main

# all
.PHONY: all
all: clean main
