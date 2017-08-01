CXX      = g++
CPPFLAGS = -Iinclude
CXXSRC   = $(wildcard src/*.cpp)
CXXOBJ   = $(patsubst src/%.cpp, %.o, $(CXXSRC))

default: problem_set

problem_set: $(CXXOBJ)
	$(CXX) $^ -o $@

%.o: src/%.cpp
	$(CXX) $(CPPFLAGS) -c -o $@ $^

clean:
	rm -f *.o problem_set
