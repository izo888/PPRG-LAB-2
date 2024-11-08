#include <iostream>
using namespace std;
int n=0;
int i=0;
int suma=0;
int main()
{
    cout <<"Podaj liczbę n: " << endl;
    cin >>n;
    for (int i = 0; i <=n;++i){
        suma += i;
    }
   cout <<"Suma szeregu wynosi: "<< suma <<endl;
    
return 0;
}