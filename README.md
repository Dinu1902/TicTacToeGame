# TicTacToe 
1.TicTacToe Game
2.un joc simplu TicTacToe care ruleaza in consola contra calculatorului 
3.Reguli: 1.E nevoie sa alegi o cifra de la 1-9 pentru a selecta o casuta din cele 9
		  2.Dupa ce alegi un numar tabela o sa se updateze cu pozitia selectata si pozitia aleasa de calculator
		  3.Trebuie sa ai 3 "X" in rand pentru a castiga
4.Tipuri de date folosite:
		  1.drawBoard- acceasta classa creaza tabla de joc
		  2.playerMove - acceasta clasa analizaeaza daca persoana care a inserat un numar de la calculator a folosit o celelula din cele ocupate de el sau de oponent
		  3.computerMove - acceasta clasa folosind rand cu un numar divizibil la 9 fara rest insereaza intr-o casuta libera 
		  checkWinner - acceasta clasa avand toatew variantele posibile analizeaza daca playerul sau calculatorul are una din comnbinatiile castigatoare
		  checkTie- analizeaza tabela daca nu a fost folosita nici o combiatie castigatoare pana la finele jocului reda in consola ca este egalitate