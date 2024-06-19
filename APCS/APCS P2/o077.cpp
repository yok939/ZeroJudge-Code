#include <bits/stdc++.h>
using namespace std;

int h, w, n, r, c, t, x, grid[25][25];

int main(){
    memset(grid, 0, sizeof(grid));
    cin >> h >> w >> n;
    while(n--){
        cin >> r >> c >> t >> x;
        int hh1 = max(0, r - t), hh2 = min(h - 1, r + t + 1);
        int ww1 = max(0, c - t), ww2 = min(w - 1, c + t + 1);
        for(int i = hh1; i <= hh2; i++){
            for(int j = ww1; j <= ww2; j++){
                if(abs(i - r) + abs(j - c) <= t) grid[i][j] += x;
            }
        }
    }
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(j) cout << ' ';
            cout << grid[i][j];
        }
        cout << '\n';
    }
    return 0;
}