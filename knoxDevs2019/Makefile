# Makefile for KnoxDevs2019 Hackathon

# Compiler 
CC=gcc

# compiler options
CFLAGS=-c -Wextra

all: client

clients: main.o list.o node.o clients.o utilities.o
	$(CC) $(CFLAGS) main.cpp list.cpp node.cpp clients.cpp utilities.cpp -o clients

main: main.o
	$(CC) $(CFLAGS) main.cpp

list: list.o
	$(CC) $(CFLAGS) list.cpp

node: node.o
	$(CC) $(CFLAGS) node.cpp

client: clients.o
	$(CC) $(CLFAGS) clients.cpp

utilities: utilities.o
	$(CC) $(CFLAGS) utilities.cpp

clear: 
	rm -rf *.o
