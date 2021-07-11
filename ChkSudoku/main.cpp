/** Programma per il controllo di una matrice Sudoku **/
#include <iostream>
#define N 9 //dimensione matrice
#define NS 3 //dimensione settore

using namespace std;

bool chkV1(int []);
bool chkV2(int []);
bool chkSottomatrice( int[][N], int, int, int, int);
bool chkSudoku (int [][N]);

int main()
{
    int sudoku[][N]= {{3, 4, 7, 1, 2, 8, 5, 9, 6},
                      {8, 6, 2, 9, 5, 7, 4, 3, 1},
                      {5, 1, 9, 6, 3, 4, 2, 7, 8},
                      {4, 7, 6, 3, 8, 9, 1, 5, 2},
                      {9, 2, 8, 4, 1, 5, 3, 6, 7},
                      {1, 3, 5, 2, 7, 6, 9, 8, 4},
                      {7, 5, 4, 8, 9, 1, 6, 2, 3},
                      {6, 8, 3, 5, 4, 2, 7, 1, 9},
                      {2, 9, 1, 7, 6, 3, 8, 4, 5}};
    if(chkSudoku(sudoku))
        cout << "Sudoku OK";
    else
        cout <<"Sudoku errato";

}



/** controlla una sottomatrice da N elementi della matrice sudoku.
    Per sottomatrice si intende un rettangolo qualsiasi (anche di una sola riga o di una sola colonna)
    della matrice Sudoku, individuato da una riga iniziale e una finale
    e da una colonno iniziale e una finale. Si assume gli elementi della matrice in input siano
    valori validi, cioè numeri interi compresi tra 1 e N.
    Parametri:
    mat: la matrice della quale conrollare il settore
    rI: riga iniziale, cI: colonna iniziale
    rF: riga finale,   cF: colonna finale
*/
bool chkSottomatrice( int mat[][N], int rI, int cI, int rF, int cF){
    int appoggio [N+1]={0}; //vettore di appoggio inzializzato con 0
    /// scrivo i valori del settore in un array
    int k=0;
    for(int i=rI; i<=rF; i++)
        for(int j=cI; j<=cF; j++){
            if(appoggio[mat[i][j]]==1)
                return false;
            else
                appoggio[mat[i][j]]=1;
            k++;
    }
    return true;
}

/** controlla la matrice sudoku */
bool chkSudoku (int sudoku[][N]){
    //controllo righe
    for(int i=0; i<N; i++){
        if(!chkSottomatrice(sudoku, i, 0, i, N-1))
            return false;
    }
    //controllo colonne
    for(int i=0; i<N; i++){
        if(!chkSottomatrice(sudoku, 0, i,N-1 , i))
            return false;
    }
    //controllo settore
    for(int i=0; i<NS; i++)
        for(int j=0; j<NS; j++)
            if(!chkSottomatrice(sudoku, i*NS, j*NS, (i+1)*(NS-1), (j+1)*(NS-1)))
                return false;

    return true;
}
