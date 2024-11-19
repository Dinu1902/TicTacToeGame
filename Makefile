CC = g++
CFLAGS = -Wall
LIBRARY = libtictactoe.a
OBJECTS = TicTacToe.o Main.o

# Build static library
$(LIBRARY): TicTacToe.o
	ar rcs $(LIBRARY) TicTacToe.o

# Build the main executable
TicTacToe: $(OBJECTS) $(LIBRARY)
	$(CC) $(CFLAGS) -o TicTacToe $(OBJECTS) -L. -ltictactoe

# Compile TicTacToe.o
TicTacToe.o: TicTacToe.cpp TicTacToe.hpp
	$(CC) $(CFLAGS) -c TicTacToe.cpp

# Compile Main.o
Main.o: Main.cpp TicTacToe.hpp
	$(CC) $(CFLAGS) -c Main.cpp

# Clean object files and library
clean:
	rm -f *.o $(LIBRARY) TicTacToe
