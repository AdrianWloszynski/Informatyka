#include <iostream>

using namespace std;

int main()
{
    int kolumna, wiersz;
    for(wiersz=1;wiersz<=10;wiersz++)
    {
        for(kolumna=1;kolumna<=10;kolumna++)
        {
            cout.width(3);
            cout<<kolumna*wiersz;
        }
        cout<<endl;
    }
    return 0;
}
