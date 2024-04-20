#include <bits/stdc++.h>
#define LL long long 
using namespace std;

LL dp[50][2], n, p[50];

int main(){
    while(cin >> n && n != 0){
        memset(dp, 0, sizeof(dp));
        memset(p, 0, sizeof(p));
        dp[0][0] = dp[0][1] = 0;
        for(int i = 1; i <= n; i++) cin >> p[i];
        for(int i = 1; i <= n; i++){
            dp[i][0] = max({dp[i - 1][0], dp[i - 1][0] + p[i], dp[i - 1][1]});
            dp[i][1] = dp[i - 1][0] + p[i] * 2;
        }
        cout << max(dp[n][0], dp[n][1]) << '\n';
    }
    return 0;
}