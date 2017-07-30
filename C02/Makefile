CC=g++
objects = main.o word_counter.o fill_vector.o

all: $(objects)
	$(CC) $(objects) -o c02

main.o:
	$(CC) -Iinclude -c src/main.cpp

word_counter.o:
	$(CC) -Iinclude -c src/word_counter.cpp

fill_vector.o:
	$(CC) -Iinclude -c src/fill_vector.cpp

clean:
	rm -f *.o c02
