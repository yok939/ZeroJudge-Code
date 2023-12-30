#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long d, n, after_d=0, narc_num=0;
    cin >> d >> n;
    long long temp0=n, temp1=0;
    while(temp0){
        after_d+=(temp0%10)*pow(d, temp1);
        temp0/=10;
        temp1++;
    }
    temp0=n;
    long long len=to_string(n).length();
    while(temp0){
        narc_num+=pow(temp0%10, len);
        temp0/=10;
    }
    if(after_d==narc_num){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}