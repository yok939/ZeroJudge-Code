#include <bits/stdc++.h>

using namespace std;

int add_x[4]={1, -1, 0, 0};
int add_y[4]={0, 0, 1, -1};

int main(){
    int n, m, h, x, y, b;
    cin >> n >> m >> h;
    vector<int> width(m);
    vector<vector<int>> grid(n, width);
    vector<vector<int>> addup(n, width);
    while(h--){
        cin >> x >> y >> b;
        grid[y][x]=(b?0:1);
        //CONNECT LINE
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout << grid[i][j] << ' ';
            }
            cout << '\n';
        }
    }
}