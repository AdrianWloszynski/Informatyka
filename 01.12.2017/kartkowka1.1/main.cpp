#include <iostream>

using namespace std;

int main()
{
    int liczba=-3;
    for(int i=0;i<=7;i++){
        {
        if(liczba!=3&&liczba!=18){
            if(i<7)
                cout<<liczba<<", ";
            else
                cout<<liczba<<".";
        }
        else{
            if(i<7){
                liczba+=3;
                cout<<liczba<<", ";
                }
            else{
                cout<<liczba<<".";
                cout<<liczba;
                }
        }
        liczba+=3;
        }


    }
    return 0;
}
