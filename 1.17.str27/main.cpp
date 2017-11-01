#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    double x,y,p=-5,q=10,liczba;
    liczba=p+(double)rand()/RAND_MAX*(q-p);
    x=liczba;
    if(x<7)
        y=pow(x,3);
    if (x>7&&x!=7&&x!=9)
        y=-8*x;
    else
    {
        int x=(int)x;
        switch(x)
        {
    case 7:
        y=cos(x-1);
        break;
    case 9:
        y=sqrt(3*x);
        break;
        }
    }
    cout<<"Wartosc funkcji wynosi : "<<y<<endl;
    system("pause");
    main();
    return 0;
}
