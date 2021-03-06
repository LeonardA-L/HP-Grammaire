# Declaration of variables
CC = g++
CC_FLAGS = -w -g -std=c++11 #-DDEBUG
LINKER_FLAGS = -lboost_regex

# File names
EXEC = lut
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

# Main target
$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXEC) $(LINKER_FLAGS)

# To obtain object files
%.o: %.cpp
	$(CC) -c $(CC_FLAGS) $< -o $@ 

# To remove generated files
clean:
	rm -f $(EXEC) $(OBJECTS)

tests:
	make && cd Tests && ./mktest.sh && cd ..
