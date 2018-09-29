all : str.c
	gcc -o str str.c

run : str
	./str
