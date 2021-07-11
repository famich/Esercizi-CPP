#include <iostream>
#include "funzioniArray.h"
#define N 100;
using namespace std;

//prototipi
void showVett(int[], int);
//variabili globali
unsigned int dim=0;
int vett [N_MAX];

int main()
{
    int scelta;
    do{
        cout << "Scegli un'opzione:" << endl;
        cout << " 1. Caricamento del vettore da tastiera" << endl;
        cout << " 2. Caricamento del vettore con numeri casuali" << endl;
        cout << " 3. Visualizza il vettore" << endl;
        cout << " 4. Valore massimo di un vettore" << endl;
        cout << " 5. Valore minimo di un vettore" << endl;
        cout << " 6. Valore medio di un vettore" << endl;
        cout << " 7. Valore modale di un vettore" << endl;
        cout << " 8. Ordinamento di un vettore" << endl;
        cout << " 9. Merge tra due vettori" << endl;
        cout << endl;
        cout << "99. Fine" << endl;
        cin >> scelta;

        switch(scelta){
            case 1:
                cout<<"quanti elementi?";
                cin>>dim;
                loadVettConsole(vett, dim);
                cout<<"il vettore è stato caricato"<<endl;
                system("pause");
                break;
            case 2:
                cout << endl << "Da implementare" << endl;
                system("pause");
                break;
            case 3:
                if(dim==0){
                    cout<<"Bisogna prima caricare il vettore"<<endl;
                }else{
                    showVettConsole(vett, dim);
                }
                cout<<endl;
                system("pause");
                break;
            case 4:
                if(dim==0){
                    cout<<"Bisogna prima caricare il vettore"<<endl;
                }else{
                    cout<<"Il valore massimo e': "<<findMax(vett, dim);
                }
                cout<<endl;
                system("pause");
                break;
            case 5:
                cout << endl << "Da implementare" << endl;
                system("pause");
                break;
            case 6:
                cout << endl << "Da implementare" << endl;
                break;
            case 7:
                cout << endl << "Da implementare" << endl;
                break;
            case 8:
                cout << endl << "Da implementare" << endl;
                break;
            case 9:
                cout << endl << "Da implementare" << endl;
                break;
            case 99:
                //fine programma
                break;
            default:
                cout << endl << "Scelta errata" << endl;
        }
        system ("CLS");

    }while(scelta!=99);

    return 0;
}


