#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL n, m, num[105][105], ans = 0, x, y, now = INT_MAX, dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
bool vis[105][105];
int main(){
	memset(vis, 1, sizeof(vis));
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> num[i][j];
			if(num[i][j] < now){
				now = num[i][j];
				x = i, y = j;
			}
			vis[i][j] = 0;
		}
	}
	bool flag = 0;
	while(!flag){
		int px, py, tmp = 0, nnow = INT_MAX;
		ans += num[x][y];
		vis[x][y] = 1;
		for(int i = 0; i < 4; i++){
			int nx = x + dx[i], ny = y + dy[i];
			if(!vis[nx][ny]){
				if(num[nx][ny] < nnow){
					px = nx, py = ny;
					nnow = num[px][py];
				}
			}
			else tmp++;
		}
		if(tmp == 4) flag = 1;
		else x = px, y = py;
    }
	cout << ans << '\n';
}
