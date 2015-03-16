CC = gcc
CFLAGS = -Wall -g
 
all:
	$(CC) $(CFLAGS) hello.c -o hello
clean:
	rm -f hello
