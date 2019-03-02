# Makefile for KnoxDevs2019 Hackathon

# Compiler 
CC=gcc

# compiler options
CFLAGS=-c Wextra

all: client

clients: main.o list.o node.o clients.o utilities.o
	$(CC) $(CFLAGS) main.cpp list.c node.c clients.c utilities.c -o clients

main: main.o
	$(CC) $(CFLAGS) main.cpp

list: list.o
	$(CC) $(CFLAGS) list.c

node: node.o
	$(CC) $(CFLAGS) node.c

client: clients.o
	$(CC) $(CLFAGS) clients.c

utilities: utilities.o
	$(CC) $(CFLAGS) utilities.c

clear: 
	rm -rf *.o
