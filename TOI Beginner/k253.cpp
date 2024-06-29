#include <bits/stdc++.h>
using namespace std;

int t, s, p, ans = 0, c[10];
float pr[6] = {0, 0, 0.9, 0.8, 0.6, 0.5};

int main(){
    cin >> t >> s >> p;
    c[1] = t / 5 - 1;
    c[2] = c[3] = c[4] = t / 5;
    c[5] = t / 5 + 1;
    for(int i = 5; i >= 1; i--){
        if(s){
            ans += (s < c[i] ? s : c[i]) * (floor(p * pr[i]));
            s -= (s < c[i] ? s : c[i]);
        }
        else break;
    }
    cout << ans << '\n';
    return 0;
}