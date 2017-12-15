#include <iostream>

using namespace std;

int main()
{
    //gdy dana nie bedzie liczba program skonczy dzialanie
    //gdy bedzie z przecinkiem przkonwertuje ja do typu double -> czyli dalej bedzie okej

    int wiek1=0,wiek2=0,x=0;
    do {
        cout<<"Podaj wiek pierwszej osoby: ";
        cin>>wiek1;
        cout<<"Podaj wiek drugiej osoby: ";
        cin>>wiek2;
        //dane zawsze beda dodatnie jesli beda wieksze lub rowne 18
        if(wiek1>=18&&wiek2>=18){
                double wiek1d=wiek1;
                double wiek2d=wiek2;
            double srednia=(wiek1d+wiek2d)/2;
            cout<<"Srednia wieku wynosi: "<<srednia;
            break;
        }
        else{
        cout<<"Dane niepoprawne"<<endl;
        x++;
        }
    }
    while(x<3);
    if(x==3) cout<<"\n3 bledne proby!!!";

    return 0;
}
