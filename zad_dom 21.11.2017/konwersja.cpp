#include <iostream>
#include <bitset>


using namespace std;

int main()
{
    int system,liczba;
    cout<<"Na jaki system liczbowy kownertowac (2,8,16)?"<<endl;
    cin>>system;
    cout<<"Podaj liczbe: ";
    cin>>liczba;
    switch (system)
    {
    case 2:
        cout<<bitset<8>(liczba);
        break;
    case 8:
        cout<<oct<<"Liczba w systemie 8 wynosi: "<<liczba;
        break;
    case 16:
        cout<<hex<<"Liczba w systemie 16 wynosi: "<<liczba;
        break;
    default:
        cout<<"Bledny system liczbowy!!!\a  Sprobuj ponownie!\n\n"<<endl;
        main();
        break;
    }
    return 0;
}
