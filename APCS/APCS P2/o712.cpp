#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll m, n, k, r, c, gr[105][105], dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0}, tr = 0, ans = 0, score = 0;
bool in_range(ll x, ll y, ll mx, ll my){
	return x >= 0 && x < mx && y >= 0 && y < my; 
}

int main(){
	cin >> m >> n >> k >> r >> c;	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> gr[i][j];
		}
	}
	while(gr[r][c]){
		score += gr[r][c]--;	
		ans++;
		if(!(score % k)) tr = (tr + 1) % 4;
		while(gr[r + dx[tr]][c + dy[tr]] == -1 || !in_range(r + dx[tr], c + dy[tr], m, n)) tr = (tr + 1) % 4;
		r += dx[tr], c += dy[tr];
	}
	cout << ans << '\n';
}
