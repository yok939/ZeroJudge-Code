#include <iostream>

using namespace std;

int main()
{
    long long H, M, S, T, M_temp=0;
    cin >> H >> M >> S >> T;

    M_temp=H*60+M;
    M_temp+=T*90;
    if(M_temp>=36*60){
        M_temp-=36*60;
    }
    else if(M_temp<0){
        M_temp+=36*60;
    }
    H=M_temp/60;
    M=M_temp%60;


    //OUTPUT
    cout<<H;
    cout<<":";
    if(M<10){
        cout<<0<<M;
    }
    else{
        cout<<M;
    }
    cout<<":";
    if(S<10){
        cout<<0<<S;
    }
    else{
        cout<<S;
    }
}
