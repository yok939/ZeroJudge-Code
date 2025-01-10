#include <bits/stdc++.h>
#define ll long long
#define el '\n'
using namespace std;

ll k, n, ans = 0;
char a[5][105], now[105];
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> k >> n;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < k; j++) cin >> a[i][j];
	}
	for(int i = 0; i < n; i++){
		ll cur = 0, tmp[3] = {0, 0, 0};
		bool ga[3] = {1, 1, 1};
		for(int j = 0; j < k; j++) cin >> now[j];
		for(int j = k - 1; j >= 0; j--){
			for(int jj = 0; jj < 3; jj++){
				if(now[j] == a[jj][j] && ga[jj]) tmp[jj]++;
				else ga[jj] = 0;
			}
		}
		for(int j = 0; j < 3; j++){
			if(tmp[j] == k) cur = max((ll) 5e5, cur);
			else if(tmp[j] >= k - 2) cur = max((ll) 1e4, cur);
			else if(tmp[j] >= k - 4) cur = max((ll) 1e3, cur);
			else if(tmp[j] >= 3) cur = max((ll) 3e2, cur);
		}
		ans += cur;
	}
	cout << ans << el;

}
