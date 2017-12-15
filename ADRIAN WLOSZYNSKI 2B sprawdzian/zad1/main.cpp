#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

int main()
{
    srand(time(NULL));
    int poczatek=10,koniec=50,losowana1=0,losowana2=0,liczba;
    losowana1=poczatek+rand()%(koniec-poczatek+1);
    losowana2=poczatek+rand()%(koniec-poczatek+1);
    char literka;
    cout<<"Podaj literke (p/t): ";
    cin>>literka;
    if(literka=='p') liczba=1;
    if(literka=='t') liczba=2;

    switch(liczba){
    case 1:{
        if(losowana1==losowana2)
            cout<<"Pole kwadratu wynosi: "<<losowana1*losowana2;
        else cout<<"Pole prostokata wynosi: "<<losowana1*losowana2;

        break;

    }
    case 2:{
        double podstawa=losowana1,wysokosc=losowana2;
        cout<<"Pole trojkata wynosi: "<<(losowana1/2)*losowana2;

    }
    default:
        cout<<"Bledna literka";
    }
    return 0;
}
