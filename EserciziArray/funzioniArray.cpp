#include <iostream>
#include "funzioniArray.h"

using namespace std;
/* trova il valore massimo in un vettore di interi */
int findMax(int vett[], int dim){
    int maxVal = vett[0];

    for(int i=1; i<dim; i++){
        if(vett[i]>maxVal)
            maxVal=vett[i];
    }
    return maxVal;
}

/* valorizza gli elemento di un vettore di numeri interi
   leggendoli in input da tastiera */
void loadVettConsole(int vett[], int dim){
    for(int i=0; i<dim; i++){
        cout<<"scrivi l'elemento di posizione "<<i<<": ";
        cin>>vett[i];
    }
}

/* visualizza su console gli elementi di un array di interi */
void showVettConsole(int vett[], int dim){
    cout<<"-------------"<<endl;
    for(int i=0; i<dim; i++){
        cout<<"pos. "<<i<<": "<<vett[i]<<endl;
    }
    cout<<"-------------"<<endl;
}

