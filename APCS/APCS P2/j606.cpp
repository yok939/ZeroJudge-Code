#include <bits/stdc++.h>
using namespace std;
#define LL long long

int main(){
    LL k, q, r, temp0;
    vector<vector<char>> sl;
    string s;
    cin >> k >> q >> r;
    cin >> s;
    for(int i=0;i<q;i++){
        vector<char> sk(k, '0');
        for(int i=0;i<k;i++){
            cin >> temp0;
            sk[temp0-1]=s[i];
        }
        for(int i=0;i<k;i++){
            s[i]=sk[i];
        }
        sl.push_back(sk);
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<q;j++){
            cout << sl[j][i];
        }
        cout << '\n';
    }
    return 0;
}