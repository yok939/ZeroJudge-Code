#include <bits/stdc++.h>
using namespace std;

int n, m, s, e, d, p[10005], a1, tmp = 0, now = 0;

int main(){
    cin >> n >> m;
    for(int i = 0; i < n + m; i++){
        cin >> s >> e;
        p[s] += 1; p[e] -= 1;
    }
    cin >> d; 
    for(int i = 0; i <= 10000; i++){
        if(tmp == d){
            cout << a1 << ' ' << i << '\n';
            return 0;
        }
        now += p[i];
        if(now == 2){
            tmp++;
            if(a1 == -1) a1 = i;
        }
        else{ 
            tmp = 0;
            a1 = -1;
        }
    }
    cout << -1 << '\n';
}