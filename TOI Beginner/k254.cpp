#include <bits/stdc++.h>
using namespace std;

int s, e, b, k, tk = 0;

int main(){
    cin >> s >> e >> b >> k;
    for(int i = s; i <= e; i++){
        if(!(i % b) || i / 100 == b || (i % 100) / 10 == b || (i % 10) == b) tk++;
        if(tk == k){
            cout << i << '\n';
            return 0;
        }
    }
    cout << -1 << '\n';
    return 0;
}