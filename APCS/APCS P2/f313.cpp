#include <bits/stdc++.h>
using namespace std;

int r, c, k, m, ans_min = INT_MAX, ans_max = INT_MIN;
int upd[55][55], now[55][55];
int dir[4][2] = {{0, -1}, {0, 1}, {1, 0}, {-1, 0}};

bool in_range(int x, int y, int tarx, int tary){
    return x >= 1 && x <= tarx && y >= 1 && y <= tary;
}

int main(){
    memset(upd, 0, sizeof(upd));
    cin >> r >> c >> k >> m;
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            cin >> now[i][j];
        }
    }
    while(m--){
        for(int i = 1; i <= r; i++){
            for(int j = 1; j <= c; j++){
                if(now[i][j] == -1) continue;
                for(int p = 0; p < 4; p++){
                    int new_x = i + dir[p][0], new_y = j + dir[p][1];
                    if(in_range(new_x, new_y, r, c) && now[new_x][new_y] != -1){
                        upd[new_x][new_y] += now[i][j] / k;
                        upd[i][j] -= now[i][j] / k;
                    }
                }
            }
        }
        for(int i = 1; i <= r; i++){
            for(int j = 1; j <= c; j++){
                now[i][j] += upd[i][j];
                upd[i][j] = 0;
            }
        }
    }
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            if(now[i][j] != -1){
                ans_min = min(ans_min, now[i][j]);
                ans_max = max(ans_max, now[i][j]);
            }
        }
    }
    cout << ans_min << '\n' << ans_max << '\n';
    return 0;
}
