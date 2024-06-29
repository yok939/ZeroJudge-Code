#include <bits/stdc++.h>
using namespace std;

int r, c, x = 0, y = 0, tk = 0, dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
char gr[105][105];
string s;

bool in_range(int x, int y, int max_x, int max_y){
    return x >= 0 && y >= 0 && x < max_x && y < max_y;
}

int main(){
    memset(gr, '.', sizeof(gr));
    cin >> r >> c >> s;
    gr[x][y] = '*';
    for(auto cc : s){
        int tmp = cc - '0';
        for(int i = 0; i < tmp; i++){
            int nx = x + dir[tk % 4][0], ny = y + dir[tk % 4][1];
            if(in_range(nx, ny, r, c)){
                x = nx, y = ny;
                gr[x][y] = '*';
            }
            else break;
        }
        tk++;
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << gr[i][j];
        }
        cout << '\n';
    }
    return 0;
}