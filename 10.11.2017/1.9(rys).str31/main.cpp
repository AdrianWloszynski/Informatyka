#include <iostream>

using namespace std;

int main()
{
    int s=0,a=0;
    do
    {
        s=s+a;
        cout<<"Podaj a: ";
        cin>>a;

    }
    while(a<=50);
        cout<<"S wynosi: "<<s;
    return 0;
}
