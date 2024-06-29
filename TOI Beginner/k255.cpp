#include <bits/stdc++.h>
using namespace std;

int n, w, amo = 0, m, x, total = 0, ans = -1;

int main(){
    cin >> n >> w;
    for(int i = 1; i <= n; i++){
        total = 0;
        cin >> m;
        while(m--){cin >> x; total += x;}
        amo += w - total;
        if(amo < 0 && ans == -1) ans = i;
    }
    cout << ans << '\n';
    return 0;
}