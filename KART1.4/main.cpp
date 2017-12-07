#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void najwieksza (int a,int b,int c)
{
    int najwieksza=a;
    if(b>najwieksza)
        najwieksza=b;
    if(c>najwieksza)
        najwieksza=c;
    cout<<"Najwieksza liczba: "<<najwieksza;

}

int main()
{
    srand(time(0));
    int a=rand(),b=rand(),c=rand();
    cout<<"3 losowe liczby: "<<a<<", "<<b<<", "<<c<<endl;
    najwieksza(a,b,c);



    return 0;
}
