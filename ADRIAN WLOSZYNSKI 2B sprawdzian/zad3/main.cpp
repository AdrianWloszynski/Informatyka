#include <iostream>

using namespace std;

int main()
{

   for(int a=-4;a<=16;a=a+2){
        if(a!=0&&a!=6&&a!=14){
            if(a!=16){
                cout<<a<<", ";
            }
            else
                cout<<a<<".";
        }

   }

    return 0;
}
