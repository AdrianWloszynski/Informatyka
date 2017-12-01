#include <iostream>

using namespace std;

int main()
{
    string haslo="haslo",podane_haslo;
    cout<<"Podaj haslo: ";
    cin>>podane_haslo;
    if(podane_haslo==haslo)
        cout<<"ok";
    else
        cout<<"nie ok";
    return 0;
}
