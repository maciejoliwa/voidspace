CC = gcc
FLAGS = -std=c11 -pedantic
FILES = src/planet.c src/main.c

all:
	$(CC) $(FILES) $(FLAGS) -o main.exe