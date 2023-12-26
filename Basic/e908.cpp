#include <bits/stdc++.h>
using namespace std;
int main(){
    string week[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    string s0;
    long long n;
    int i;
    cin >> s0 >> n;
    for(i=0;i<7;i++){
        if(s0==week[i]){
            break;
        }
    }
    cout << week[(n+i)%7];

}