/*
** modifica i valori di un vettore mediandoli a tre a tre
*/

#include <iostream>
#include <ctime>
using namespace std;

#define DIM 10


void trovaMax( int m[DIM][DIM] ) {
    // .............
}

void stampaMatrice( int m[DIM][DIM] ) {
    for (int i=0; i<DIM; i++) {
        for (int j=0; j<DIM; j++)
            cout << m[i][j] << "\t";
        cout << endl;
    }
}

void riempiMatrice( int m[DIM][DIM] ) {
    for (int i=0; i<DIM; i++)
        for (int j=0; j<DIM; j++)
            m[i][j] = rand()%100;
}


int main()
{
    srand(time(NULL));    
    int matrice[DIM][DIM];
    riempiMatrice(matrice);
    stampaMatrice(matrice);

    return 0;
}