#include <bits/stdc++.h>
using namespace std;

int dir[4][2] = {{0, -1}, {-1, 0}, {0, 1}, {1, 0}}, grid[55][55];
int n, turn = 0, x, y, tmp = 0, c1 = 1, c2 = 0, c3 = 0;

int main(){
    cin >> n >> c2;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }
    x = y = (n / 2);
    cout << grid[y][x];
    while(x >= 0 && x < n && y >= 0 && y < n){
        if(c3 == 2){
            c1++;
            c3 = 0;
        }
        for(int i = 0; i < c1; i++){
            x += dir[c2][1], y += dir[c2][0];
            if(!(x >= 0 && x < n && y >= 0 && y < n)) break;
            cout << grid[y][x];
        }
        c2 = (c2 + 1) % 4;
        c3++;
    }   
    cout << '\n';
    return 0;
}