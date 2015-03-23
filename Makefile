# Declaration of variables
CC = g++
CC_FLAGS = -w
LINKER_FLAGS = -lboost_regex

# File names
EXEC = run
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
	make -B && cp $(EXEC) Tests/lut && cd Tests && ./mktest.sh && cd ..
