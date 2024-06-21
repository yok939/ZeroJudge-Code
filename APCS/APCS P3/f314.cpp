#include <bits/stdc++.h>
#define LL long long 
using namespace std;

LL m, n, dp[2][10005][2], grid[10005], pre = 0, now = 1, ans = INT_MIN;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    memset(dp, 0, sizeof(dp));
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        for(int i = 1; i <= n; i++) cin >> grid[i];
        for(int i = 1; i <= n; i++) dp[now][i][0] = max(max(dp[pre][i][0], dp[pre][i][1]), dp[now][i - 1][0]) + grid[i];
        for(int i = n; i >= 1; i--) dp[now][i][1] = max(max(dp[pre][i][0], dp[pre][i][1]), dp[now][i + 1][1]) + grid[i];
        swap(pre, now);
    }
    for(int i = 1; i <= n; i++) ans = max({dp[pre][i][0], dp[pre][i][1], ans});
    cout << ans << '\n';
    return 0;
}