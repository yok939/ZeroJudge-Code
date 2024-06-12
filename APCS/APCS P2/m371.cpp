#include <bits/stdc++.h>
using namespace std;

int n, m, gr[25][45], dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}}, ans = 0;

bool in_range(int x, int y, int tarx, int tary){
    return 1 <= x && 1 <= y && tarx >= x && tary >= y;
}

int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> gr[i][j];
        }
    }
    for(int p = 1; p <= max(n, m); p++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(gr[i][j] == -1) continue;
                for(int k = 0; k < 4; k++){
                    if(gr[i][j] == -1) break;
                    int nx = i, ny = j;
                    for(int pp = 1; pp <= p; pp++){
                        nx += dir[k][0], ny += dir[k][1];
                        if(in_range(nx, ny, n, m)){
                            if(gr[i][j] == gr[nx][ny]){
                                ans += gr[i][j];
                                gr[i][j] = gr[nx][ny] = -1;
                                break;
                            }
                            else if(gr[nx][ny] != -1) break;
                        }
                    }    
                }
            }
        }
    }    
    cout << ans << '\n';
    return 0;
}