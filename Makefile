
CC= gcc

OBJ= main.o 

FLAG= -Wall

LIBRARY= -lcurl

all: main clean

main : $(OBJ)
	$(CC) $(FLAG) -o parser  $^ $(LIBRARY) -I.

%.o: %.c
	$(CC) -c $^ -o $@

clean:
	rm -rf *.o

destroy:
	rm parser