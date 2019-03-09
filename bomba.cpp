#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <time.h>
#include <windows.h>

using namespace std;

int main()
{
    int cod,n,random_number,i;
    cout<<"Numarul de jucatori:";
    cin>>n;
    for(i=1;i<=n;i++)
    {

        srand(time(0));
        random_number=rand()+1000;
        cout<<"Codul este:"<<random_number<<endl;
        cout<<"Introdu codul:";
        long int before = GetTickCount();
        cin>>cod;
        long int after = GetTickCount();
        long int diferenta=0;
        diferenta=after-before;
        if(cod!=random_number || diferenta>=15000)
        {
            cout<<"BOMBA EXPLODEAZA!";
            break;
        }
    }
    return 0;
}
