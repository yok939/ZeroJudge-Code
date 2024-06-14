#include <bits/stdc++.h>
using namespace std;

int r, c, dir[8][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
int ansx, ansy;
char grid[80][80];
string s;

bool in_range(int x, int y, int tarx, int tary){
    return x >= 1 && y >= 1 && x <= tarx && y <= tary; 
}

int main(){
    cin >> r >> c;
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            cin >> grid[i][j];
        }
    }
    cin >> s;
    int len = s.length();
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            for(int k = 0; k < 8; k++){
                int nx = i, ny = j, tmp = 0;
                while(1){
                    if(tmp == len){
                        ansx = nx - dir[k][0], ansy = ny - dir[k][1];                            
                        cout << i << ' ' << j << '\n' << ansx << ' ' << ansy << '\n';
                        return 0;
                    }
                    if(!in_range(nx, ny, r, c)) break;
                    if(grid[nx][ny] == toupper(s[tmp]) || grid[nx][ny] == tolower(s[tmp])) tmp++;
                    else break;
                    nx += dir[k][0], ny += dir[k][1];
                }
            }
        }
    }
    cout << "NO\n";
    return 0;
}
