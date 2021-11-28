CC=gcc
OBJECTS_MAIN=main.o
FLAGS= -Wall -g

all : connections

connections: $(OBJECTS_MAIN) my_mat.o
	$(CC) $(FLAGS) -o connections $(OBJECTS_MAIN) my_mat.o

$(OBJECTS_MAIN): main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

.PHONY: clean all

clean:
	rm -f *.o connections