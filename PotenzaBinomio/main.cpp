/** programma per stampare lo sviluppo della potenza n-esima (n intero positivo o nullo) di un binomio */
#include <iostream>

using namespace std;

//prototipi
unsigned int fatt(unsigned int);
unsigned int coeffBin(unsigned int, unsigned int);

int main()
{
    unsigned int n;
    cout << "Scrivi la potenza del binomio n (intero positivo o nullo)" << endl;
    cin>>n;
    cout<<"( a + b )^"<< n <<" = ";

    for(int k=0; k<=n; k++){
        int coeff = coeffBin(n, k);
        if(coeff!=1 || (coeff==1 && n==0))cout<<coeff;   //coefficiente numerico
        if((n-k)>0) cout<<"a";                           //il monomio a
        if((n-k)>1) cout<<"^"<<n-k;                      //la potenza di a
        if(k>0) cout<<"b";                               //il monomio b
        if(k>1) cout<<"^"<<k;                            //la potenza di b
        if(k<n) cout<<" + ";                             //il segno di somma

    }

    return 0;
}

/** calcola il fattoriale di un numero (intero positivo o nullo) */
unsigned int fatt(unsigned int n){
    int fatt = 1;
    if(n>1){
        for (int i=2; i<=n; i++){
            fatt*=i;
        }
    }
    return fatt;
}

/** calcola il coefficiente binomiale "n sopra k" */
unsigned int coeffBin(unsigned int n, unsigned int k){
    return fatt(n)/(fatt(k)*fatt(n-k));
}
