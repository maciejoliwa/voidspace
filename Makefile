CC = clang
FLAGS = -std=c11
FILES = src/planet.c src/main.c

all:
	$(CC) $(FILES) $(FLAGS) -o main