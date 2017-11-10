#include <iostream>

using namespace std;

int main()
{
   int i=0,n=-4;
    for(i;i<5;i++)
    {
        if(n!=2&&n!=8)
        {
        cout<<n<<endl;
        }
        else
        {n+=3;
        cout<<n<<endl;
        }
        n+=3;
    }


    return 0;
}
