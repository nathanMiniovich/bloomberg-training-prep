CC=g++
objects = main.o word_counter.o fill_vector.o

all: $(objects)
	$(CC) $(objects) -o c04

main.o:
	$(CC) -Iinclude -c src/main.cpp

clean:
	rm -f *.o c02
