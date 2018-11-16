all: rotater

rotater: main.c bmp.c
	gcc main.c bmp.c -lm -o rotater

clean:
	rm rotater output*.bmp
