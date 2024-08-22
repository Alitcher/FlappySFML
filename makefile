CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2 -g
LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
EXEC = FlappySFML

# The all rule should only depend on the executable
all: $(EXEC)

# Link all object files into the executable
$(EXEC): $(OBJ)
	$(CXX) $^ -o $@ $(LDFLAGS)

# Rule to compile each .cpp file into an .o file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule to remove object files and the executable
clean:
	rm -f $(OBJ) $(EXEC)

.PHONY: all clean
