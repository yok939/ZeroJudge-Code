#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL n, m, gr[55][55], ans = 0, dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};
bool flag = 0;
bool in_range(int x, int y){
	return x >= 1 && y >= 1 && x <= n && y <= m;
}
int main(){
	memset(gr, -1, sizeof(gr));
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> gr[i][j];
		}
	}
	do{
		flag = 0;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				if(gr[i][j] != -1){
					int ii = 0, jj = 0;
					for(int k = 0; k < 4; k++){
						for(int tx = i + dx[k], ty = j + dy[k]; in_range(tx, ty); tx += dx[k], ty += dy[k]){
							if(gr[tx][ty] != -1){
								if(gr[tx][ty] == gr[i][j]) ii = tx, jj = ty;
								break;
							}
						}
						if(ii && jj){
							ans += gr[i][j]; 	
							gr[i][j] = gr[ii][jj] = -1;
							flag = 1;
					   		break;
						}
					}
				}
			}
		}
	} while(flag);
	cout << ans << '\n';
}

