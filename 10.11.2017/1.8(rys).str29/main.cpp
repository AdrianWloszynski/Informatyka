#include <iostream>

using namespace std;

int main()
{
    int n,s=1,i=3;
    cout<<"Podaj n: ";\
    cin>>n;
    while(i<=n+2)
    {
        s*=i;
        i+=1;
    }
    cout<<"S wynosi: "<<s<<endl;
    cout<<"I wynosi: "<<i<<endl;
    return 0;
}
