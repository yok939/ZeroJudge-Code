#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    string IDin;
    int B1=0, B2=0, B3=0, temp1=0;
    cin >> IDin;
    for(int i=0;i<IDin.size();i++){
        if(IDin[i]-48>B3){
            B3=IDin[i]-48;
        }
        if(IDin[i]-48>B2){
            temp1=IDin[i]-48;
            B3=B2;
            B2=temp1;
        }
        if(IDin[i]-48>B1){
            temp1=IDin[i]-48;
            B2=B1;
            B1=temp1;
        }
    }
    if(pow(B1, 2)+pow(B2, 2)==(IDin[6]-48)*100+(IDin[7]-48)*10+(IDin[8]-48)*1){
        cout << "Good Morning!";
    }
    else{
        cout << "SPY!";
    }
    return 0;
}
