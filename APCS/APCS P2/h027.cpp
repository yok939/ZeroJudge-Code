#include <bits/stdc++.h>
using namespace std;

int s, t, n, m, r, total = 0, ans = INT_MAX, asum = 0;
int a[15][105], b[15][105];

int main(){
    cin >> s >> t >> n >> m >> r; 
    for(int i = 1; i <= s; i++){
        for(int j = 1; j <= t; j++){
            cin >> a[i][j];
            asum += a[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> b[i][j];
        }
    }
    for(int i = 1; i <= n - s + 1; i++){
        for(int j = 1; j <= m - t + 1; j++){
            int tmp = 0;
            int diff = 0;
            for(int x = 1; x <= s; x++){
                for(int y = 1; y <= t; y++){
                    diff += (b[i + x - 1][j + y - 1] != a[x][y] ? 1 : 0);
                    tmp += b[i + x - 1][j + y - 1];
                }
            }
            if(diff <= r){
                total++;
                ans = min(abs(tmp - asum), ans);
            }
        }
    }
    cout << total << '\n' << (ans == INT_MAX ? -1 : ans) << '\n';
    return 0;
}