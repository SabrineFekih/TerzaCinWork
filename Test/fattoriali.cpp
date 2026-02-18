/*
** calcolo del fattoriale con e senza ricorsione
*/

#include <iostream>
using namespace std;

int fattoriale_iterativo( int n ) {
    int r = 1;
    for (int i=2; i<=n; i++) r=r*i;
    return r;
}

int fattoriale_ricorsivo( int n ) {
    if (n<=1) return 1;
    return n*fattoriale_ricorsivo(n-1);
}

int main()
{
    int N = 8;
    cout<<"Il fattoriale di " << N << " e' " << fattoriale_iterativo(N) << endl;
    cout<<"Il fattoriale di " << N << " e' " << fattoriale_ricorsivo(N) << endl;

    return 0;
}