/* Soluzione ricorsiva del problema "Torre di Hanoi"
*/
#include <iostream>

using namespace std;
void hanoi(int numD,char partenza, char app, char arrivo);
int spostamenti = 0;
int main()
{
   int numD;
   cout<<"Quanti dischi:";
   cin>>numD;
   hanoi(numD,'a','b','c');
   cout<<endl<<"Sono stati eseguiti "<<spostamenti<<" spostamenti";
}

void hanoi(int numD,char partenza, char app, char arrivo){
    if(numD==1){
        cout<<partenza<<"->"<<arrivo<<" ";
    }else {
        hanoi(numD-1,partenza,arrivo,app);
        cout<<partenza<<"->"<<arrivo<<" ";
        hanoi(numD-1,app,partenza,arrivo);
    }
    spostamenti++;
}
