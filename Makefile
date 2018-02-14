CC=g++
EXE_FILE=evolve
HEADERS=$(wildcard include/*.hpp)
SOURCES=$(wildcard src/*.cpp)
OBJS=$(patsubst src/%.cpp,build/%.o,$(SOURCES))
CXXFLAGS=-std=c++11 -g -Iinclude

.PHONY: setup all clean

all: setup $(EXE_FILE)

setup:
	mkdir -p build

$(EXE_FILE): $(OBJS) | setup
	$(CC) $^ -o $@ $(CXXFLAGS)

build/%.o: src/%.cpp $(HEADERS) | setup
	$(CC) -c $< -o $@ $(CXXFLAGS)

clean: 
	rm -f $(OBJS) $(EXE_FILE)
