CC=gcc

SRC=src/main.c src/canvas.c src/shapes.c src/editor.c

all:
	$(CC) $(SRC) -Iinclude -lm -o editor

run:
	./editor

clean:
	rm -f editor