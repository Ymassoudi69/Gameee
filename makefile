prog:play.o fun.o
	gcc play.o fun.o -o prog -lSDL -lSDL_ttf -g -lSDL_image -lSDL_mixer
play.o:play.c
	gcc -c play.c -g
fun.o:fun.c
	gcc -c fun.c -g
