#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int poczatek=10,koniec=50,losowana=0;
    losowana=poczatek+rand()%(koniec-poczatek+1);
    cout<<"Losowana:"<<losowana<<endl;
    if(losowana%2!=0) cout<<"Nieparzysta liczba calkowita dodatnia"<<endl;
    else cout<<"To nie jest nieparzysta liczba calkowita dodatnia"<<endl;
    return 0;
}
