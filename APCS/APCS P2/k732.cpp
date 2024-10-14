#include <bits/stdc++.h>
#define F first
#define S second
#define LL long long
using namespace std;

LL n, m, gr[55][55];
vector<pair<int, int>> ans;
int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> gr[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			LL x = gr[i][j], tmp = 0;
			for(int ii = max(1LL, i - x); ii <= min(n, i + x); ii++){
				for(int jj = max(1LL, j - x); jj <= min(m, j + x); jj++){
					if(abs(i - ii) + abs(j - jj) <= x) tmp += gr[ii][jj];	
				}
			}
			if(tmp % 10 == x) ans.push_back({i, j});
		}
	}
	cout << ans.size() << '\n';;
	for(auto i : ans) cout << i.F - 1 << ' ' << i.S - 1 << '\n';
}
