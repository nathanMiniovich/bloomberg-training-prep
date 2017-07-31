CC=g++
objects = main.o dynamic_storage.o

all: $(objects)
	$(CC) $(objects) -o c04

main.o:
	$(CC) -Iinclude -c src/main.cpp

dynamic_storage.o:
	$(CC) -Iinclude -c src/dynamic_storage.cpp

clean:
	rm -f *.o c04
