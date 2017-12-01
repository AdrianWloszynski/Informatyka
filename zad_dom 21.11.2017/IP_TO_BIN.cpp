y
#include <iostream>
#include <stdio.h>
#include <bitset>


using namespace std;

int main()
{
    char cal_okt1[4],cal_okt2[4],cal_okt3[4],cal_okt4[4];
    cout<<"Podaj IP: ";
    cin>>cal_okt1>>cal_okt2>>cal_okt3>>cal_okt4;

    cout<<"IP_DEC: "<<cal_okt1<<"."<<cal_okt2<<"."<<cal_okt3<<"."<<cal_okt4<<endl;
    int bin_okt1,bin_okt2,bin_okt3,bin_okt4;

    sscanf(cal_okt1,"%d",&bin_okt1);
    sscanf(cal_okt2,"%d",&bin_okt2);
    sscanf(cal_okt3,"%d",&bin_okt3);
    sscanf(cal_okt4,"%d",&bin_okt4);

    cout<<"IP_BIN: "<<bitset<8>(bin_okt1)<<"."<<bitset<8>(bin_okt2)<<"."<<bitset<8>(bin_okt3)<<"."<<bitset<8>(bin_okt4);


    return 0;
}
