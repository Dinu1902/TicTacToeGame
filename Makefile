
EXEC = TicTacToeGame


INCLUDE_DIR = include
SRC_DIR = src
LIB_DIR = lib


SOURCES = Main.cpp
OBJECTS = $(SOURCES:.cpp=.o)


CXX = g++
CXXFLAGS = -Wall -I$(INCLUDE_DIR)


LIBS = tictactoe


all: $(EXEC)


$(EXEC): $(OBJECTS)
	$(CXX) $(OBJECTS) -L$(LIB_DIR) -l$(LIBS) -o $(EXEC)


%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


clean:
	rm -f $(OBJECTS) $(EXEC)
