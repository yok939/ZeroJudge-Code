#include <bits/stdc++.h>
using namespace std;

int n, m, k, q[55][55], c[55][55], ans = INT_MAX;

int main(){
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> q[i][j];
        }
    }
    for(int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){
            cin >> c[i][j];
        }
    }
    for(int i = 0; i < k; i++){
        int total = 0;
        for(int j = 0; j < m; j++){
            for(int a = 0; a < m; a++){
                int addup = 0;
                for(int b = 0; b < n; b++){
                    if(c[i][b] == j) addup += q[b][a];
                }
                total += (j == a ? addup : addup > 1000 ? 3000 + (addup - 1000) * 2 : addup * 3);
            }
        }
        ans = min(ans, total);
    }
    cout << ans << '\n';
    return 0;
}