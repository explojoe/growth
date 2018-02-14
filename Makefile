CC=g++
EXE_FILE=evolve
HEADERS=$(wildcard include/*.hpp)
SOURCES=$(wildcard src/*.cpp)
OBJS=$(patsubst src/%.cpp,build/%.o,$(SOURCES))
#OBJS=$(SOURCES:.cpp=.o)
CXXFLAGS=-std=c++11 -g -Iinclude

all: $(EXE_FILE)

$(EXE_FILE): $(OBJS)
	$(CC) $^ -o $@ $(CXXFLAGS)

build/%.o: src/%.cpp $(HEADERS)
	$(CC) -c $< -o $@ $(CXXFLAGS)
			
clean: 
	rm -f $(OBJS) $(EXE_FILE)
