#include <iostream>

using namespace std;

int main()
{
    double a,b,c,d,minimum;
    cout<<"Podaj 4 liczby"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    minimum=a;
    if(b<minimum)
    {
        minimum=b;
    }
    if(c<minimum)
    {
        minimum=c;
    }
    if(d<minimum)
    {
        minimum=d;
    }
    cout<<"Najmniejsza liczba to: "<<minimum;
    return 0;
}
