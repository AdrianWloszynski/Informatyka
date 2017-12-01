#include <iostream>

using namespace std;

int main()
{
    int first,last,x;
    cin>>first;
    cin>>last;
    for(x=first;x<=last;x++){
        if(x%2!=0){
                if(x!=last && x!= last - 1)
                cout<<x<<",";
        else
        cout<<x;
        }
        else
            cout<<"\a";
    }
    cout<<".";






    return 0;
}
