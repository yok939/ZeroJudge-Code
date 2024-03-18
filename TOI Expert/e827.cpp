#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL mod=int(1e9)+7;

LL rec(LL target){
    if(target==0) return 1;
    if(target==1) return 2;
    if(target&1) return (rec(target-1)*rec(1))%mod;
    LL x=rec(target/2);
    return (x*x)%mod;
}

int main(){
    int t, L;
    cin >> t;
    while(t--){
        cin >> L;
        cout << rec(L-1) << '\n';
    }
    return 0;
}