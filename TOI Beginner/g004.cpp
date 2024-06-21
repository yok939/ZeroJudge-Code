#include <bits/stdc++.h>
using namespace std;

int grid[15][15], ans[15][15], r, c, dir[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool in_range(int x, int y, int mx, int my){
    return x >= 1 && y >= 1 && x <= mx && y <= my;
}

int main(){
    memset(ans, 0, sizeof(ans));
    cin >> r >> c;
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            cin >> grid[i][j];
        }
    }
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            if(!grid[i][j]){
                int tmp = 0;
                for(int k = 0; k < 4; k++){
                    int nx = i + dir[k][0], ny = j + dir[k][1];
                    if(in_range(nx, ny, r, c)){
                        ans[i][j] += grid[nx][ny]; 
                        if(grid[nx][ny]) tmp++;
                    }
                }
                if(tmp) ans[i][j] = (ans[i][j] / tmp);
            }
            else ans[i][j] = grid[i][j];
        }
    }
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            if(j > 1) cout << ' ';
            cout << ans[i][j];
        }
        cout << '\n';
    }
    return 0;
}