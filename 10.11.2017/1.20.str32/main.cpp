#include <iostream>

using namespace std;

int main()
{
    int i=0,n=12;
    for(i;i<6;i++)
    {
        if(n!=0)
        {
        cout<<n<<endl;
        }
        else
        {n-=4;
        cout<<n<<endl;
        }
        n-=4;
    }

    return 0;
}
