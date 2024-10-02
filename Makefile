all: TicTacToe

TicTacToe: checkTie.o checkWinner.o computerMove.o drawBoard.o playerMove.o main.o
	g++ -o TicTacToe.exe checkTie.o checkWinner.o computerMove.o drawBoard.o playerMove.o main.o

checkTie.o:
	g++ checkTie.cpp -o checkTie.o -c

checkWinner.o:
	g++ checkWinner.cpp -o checkWinner.o -c

computerMove.o:
	g++ computerMove.cpp -o computerMove.o -c

drawBoard.o:
	g++ drawBoard.cpp -o drawBoard.o -c

playerMove.o:
	g++ playerMove.cpp -o playerMove.o -c

main.o:
	g++ main.cpp -o main.o -c

clean:
	del -f *.o *.exe