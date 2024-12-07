# TicTacToe Game

## Descrierea proiectului
Acesta este un joc clasic TicTacToe implementat în C++, folosind o clasă `TicTacToe` care gestionează logica jocului și un set de funcții pentru a desena tabla, a face mișcări, a verifica câștigătorii și a verifica o posibilă remiză.

## Reguli jocului
- Jocul se joacă între 2 jucători.
- Fiecare jucător alege un simbol ('X' sau 'O').
- Jucătorii fac mutări pe un tabel de 3x3.
- Primul care ajunge la 3 simboluri pe orizontală, verticală sau diagonală câștigă.
- Dacă toate celulele sunt completate fără un câștigător, jocul se termină într-o remiză.

## Dependențe
- **Compilator**: g++
- **Biblioteca standard C++**
- **Nu sunt utilizate biblioteci externe**

## Mod de construire
Pentru a construi proiectul, folosește următoarele comenzi:

1. Clonează acest proiect.
2. Construiește folosind comanda:
   ```bash
   make
