#include <bits/stdc++.h>
#define LL long long
using namespace std;

int dp[10005][10005], ans = 0, least = INT_MAX;
string tar, got;

int main(){
    cin >> tar;
    for(int k = 1; k <= 3; k++){
        memset(dp, 0, sizeof(dp));
        cin >> got;
        int len1 = tar.size(), len2 = got.size();
        for(int i = 1; i <= len1; i++) dp[0][i] = dp[0][i - 1] + 2; 
        for(int i = 1; i <= len2; i++) dp[i][0] = dp[i - 1][0] + 2; 
        for(int i = 1; i <= len2; i++){
            for(int j = 1; j <= len1; j++){
                if(tar[j - 1] == got[i - 1]) dp[i][j] = dp[i - 1][j - 1];
                else dp[i][j] = min({dp[i - 1][j - 1] + 3, min(dp[i - 1][j], dp[i][j - 1]) + 2, min(dp[i][j - 1], dp[i - 1][j]) + 2});
            }
        }
        if(dp[len2][len1] <= least){
            least = dp[len2][len1];
            ans = k;
        }
    }
    cout << ans << ' ' << least << '\n';
    return 0;
}