

all:
	clang -g -o main --std=c2x main.c types/ctype.c tools/tools.c

clean: