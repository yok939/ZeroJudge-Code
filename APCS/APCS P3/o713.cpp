#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
using namespace std;


ll m, n, qq, gr[505][505], now = 0, r, c, vis[505][505], dx[4] = {0, 0, -1, 1}, dy[4] = {-1, 1, 0, 0};
queue<pair<ll, ll>> q;
queue<pair<ll, pair<ll, ll>>> tru;

bool in_range(ll x, ll y, ll mx, ll my){
	return x >= 0 && x < mx && y >= 0 && y < my;
}

int main(){
	cin >> m >> n >> qq;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> gr[i][j];
			if(gr[i][j] == -2) r = i, c = j;
		}
	}	
	ll le = 0, ri = n * m;
	while(le < ri){
		memset(vis, 0, sizeof(vis));
		ll mid = (le + ri) / 2;
		now = 0;
		q.push({r, c});
		while(!q.empty()){	
			tru.push({(gr[q.front().F][q.front().S] == -2 ? mid : gr[q.front().F][q.front().S]), {q.front().F, q.front().S}});
			now++;
			vis[q.front().F][q.front().S] = now;
			while(!tru.empty()){
				for(int i = 0; i < 4; i++){
					ll nx = tru.front().S.F + dx[i], ny = tru.front().S.S + dy[i];
					if(in_range(nx, ny, m, n) && gr[nx][ny] != -1 && vis[nx][ny] != now && tru.front().F){
						if(!vis[nx][ny]) q.push({nx, ny});
						vis[nx][ny] = now;
						tru.push({tru.front().F - 1, {nx, ny}});
					}
				}	
				tru.pop();
			}
			q.pop();
		}
		if(now >= qq) ri = mid;
		else le = mid + 1;
	}
	cout << le << '\n';
}
