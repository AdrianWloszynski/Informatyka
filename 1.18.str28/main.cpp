#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cout<<"Podaj dlugosci najdluzszego boku trojkata"<<endl;
    cin>>c;
    cout<<"Podaj dlugosci 2 pozostalych bokow"<<endl;
    cin>>a>>b;
    if(c<(a+b))
        cout<<"Z tych bokow mozna stworzyc trojkat";
    else
        cout<<"Z tych bokow nie mozna utworzyc trojkata";

    return 0;
}
