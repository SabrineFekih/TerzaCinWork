/*
    Main del progetto Battleship
    Sandro Gallo - 14/01/2026
    Battleship Game
*/

#define DIM 10


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void piazzaNave( char matrice[DIM][DIM], int length ) {
    // Funzione per piazzare una nave di lunghezza "length" nella matrice
    int riga = rand() % DIM;
    int colonna = rand() % (DIM-(length-1)); // Per evitare overflow
    for (int i=0; i<length; i++) matrice[riga][colonna+i] = '*';
}

void stampaMatrice( char matrice[DIM][DIM] ) {
    cout << endl << "  ";
    for (int i=1; i<=DIM; i++) cout << i << " ";
    for (int i=0; i<DIM; i++) {
        cout << endl << (char)('A'+i) << " ";
        for (int j=0; j<DIM; j++) {
            cout << matrice[i][j] << " ";
        }
    }
    cout << endl << endl;
}

void inizializzaMatrice( char matrice[DIM][DIM] ) {
    for (int i=0; i<DIM; i++) {
        for (int j=0; j<DIM; j++) {
            matrice[i][j] = '~'; // Simbolo per acqua
        }
    }
}

int main() {
    srand(time(NULL));
    char m[DIM][DIM];

    inizializzaMatrice(m);
    piazzaNave(m, 4);
	stampaMatrice(m);
	return 0;
}