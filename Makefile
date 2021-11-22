CC=gcc
AR=ar
FLAGS= -Wall -g 
OBJECTS_MY_MAT=my_mat.o
OBJECTS_MAIN=main.o

all: connections

connections: $(OBJECTS_MAIN) connections.so
	$(CC) $(FLAGS) -o connections $(OBJECTS_MAIN) ./connections.so -lm

	
connections.so: $(OBJECTS_MY_MAT)
	$(CC) -shared -o connections.so $(OBJECTS_MY_MAT)

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c 


.PHONY: clean all

clean:
	rm -f *.o *.a *.so connections