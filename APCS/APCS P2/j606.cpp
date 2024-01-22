#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, q, r, p;
    string s0, s1;

    cin >> k >> q >> r;
    cin >> s0;

    string v[k];
    s1=s0;
    while(q--){
        for(int i=0;i<k;i++){
            cin >> p;
            s1[p-1]=s0[i];
            v[p-1]+=s0[i];
        }
        s0=s1;
    }
    for(int i=0;i<r;i++){
        cout << v[i] << '\n';
    }
    return 0;
}