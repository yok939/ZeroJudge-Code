#include <bits/stdc++.h>
using namespace std;

int m, n, h, r, c, t, mx = 0, now = 0;
int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
char gr[105][105];

bool in_range(int x, int y){
	return x >= 0 && x < m && y >= 0 && y < n;
}

int main(){
	cin >> m >> n >> h;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			gr[i][j] = '.';
		}
	}
	while(h--){
		cin >> r >> c >> t;
		if(!t){
			gr[r][c] = ':';
			for(int i = 0; i < 4; i++){
				int nx = r, ny = c;				
				bool can = 0;
				while(in_range(nx, ny) && !can){
					nx += dx[i], ny += dy[i];	
					if(gr[nx][ny] == ':'){
						can = 1;
					}
				}
				if(can){
					int tx = r, ty = c;
					while(tx != nx || ty != ny){
						if(gr[tx][ty] != ':'){
							if(gr[tx][ty] == '.') gr[tx][ty] = (i <= 1 ? '|' : '-');	
							else{
								if(i <= 1 && gr[tx][ty] == '-') gr[tx][ty] = 'X';
								else if(i > 1 && gr[tx][ty] == '|') gr[tx][ty] = 'X';
							}
						}
						tx += dx[i], ty += dy[i];
					}
				}
			}	
		}
		else{
			gr[r][c] = '.';
			for(int i = 0; i < 4; i++){
				int nx = r, ny = c;				
				bool can = 0;
				while(in_range(nx, ny) && !can){
					nx += dx[i], ny += dy[i];	
					if(gr[nx][ny] == ':'){
						can = 1;
					}
					else{
						if(gr[nx][ny] == 'X') gr[nx][ny] = (i <= 1 ? '-' : '|');
						else{
							if(i <= 1 && gr[nx][ny] == '|') gr[nx][ny] = '.';
							else if(i > 1 && gr[nx][ny] == '-') gr[nx][ny] = '.';
						}
					}
				}
			}	
		}
		now = 0;
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				if(gr[i][j] != '.') now++;
			}
		}
		mx = max(now, mx);
	}
	cout << mx << '\n' << now << '\n';
}
