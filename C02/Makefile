COMPILER = usr/bin/gcc
objects = main.o word_counter.o fill_vector.o

all: $(objects)
	$(COMPILER) $(objects) -o c02

main.o:
	$(COMPILER) -Iinclude -c src/main.cpp

word_counter.o:
	$(COMPILER) -Iinclude -c src/word_counter.cpp

fill_vector.o:
	$(COMPILER) -Iinclude -c src/fill_vector.cpp

clean:
	rm -f *.o c02
