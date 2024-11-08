#include <iostream>
using namespace std;
int a=0;
int b=0;
int i=0;
int j=0;
int main()
{
    cout<<"Podaj Liczbę a: ";
    cin>>a;
    cout<<"Podaj Liczbę b: ";
    cin>>b;
    cout <<"\n";
    cout <<"Pobrano liczby a == "<< a <<" oraz b == " << b <<endl;
    cout<<"\n";
    cout <<"Wiersz o dlugosci a: "<<endl;
    for(i=0; i<a;++i)
        {
        cout<<"*";
        }
    cout << "\n";
    cout <<"Kolumna o dlugosci b: " <<endl;
    for(j=0;j<b;++j)
        {
            cout<<"*"<< endl;
        }
    cout <<"\n";
    cout <<"Prostokat Gwiazdek o wymiarach 'a' na 'b' : "<<endl;
    for(i=0; i<a ; i++){
        cout <<"*";
        for (j=1; j<b ; j++){
            cout <<"*";
        }
        cout<<"\n";
    }
    cout <<"\n";
    cout <<" Obwod prostokatu o wymiarach 'a' na 'b': "<<endl;
    cout <<"\n";
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            if(i==0 || i==(b-1)|| j==0 ||j==(a-1))
            cout<<"*";
            else {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    cout<<"Trojkat prostokatny rownoramienny z katem prostem w lewym dolnym rogu: ";
    cout <<"\n";
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    cout<<"Trojkat prostokatny rownoramienny z katem prostym w prawym gornym rogu";
    cout<<"\n";
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            if(j<i){
                cout<<" ";
            }
            else {
                cout<<"*";
            }
        }
        cout<<"\n";
    }
return 0;
}