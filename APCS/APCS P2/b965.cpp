#include <bits/stdc++.h>

using namespace std;

void swapg(int target[10][10], int row, int column){
    int top=0, bottom=row-1, temp;
    for(int i=0;i<row/2;i++){
        for(int j=0;j<column;j++){
            temp=target[top][j];
            target[top][j]=target[bottom][j];
            target[bottom][j]=temp;
        }
        top++; bottom--;
    }
}


int main(){
    int r, c, m, moveg[10], grid[10][10];
    while(cin >> r >> c >> m){
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                grid[i][j]=0;
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin >> grid[i][j];
            }
        }
        for(int i=0;i<m;i++){
            cin >> moveg[i];
        }
        for(int k=m-1;k>=0;k--){
            if(moveg[k]==0){
                int temp, grid_temp[10][10];
                for(int i=0;i<c;i++){
                    for(int j=0;j<r;j++){
                        grid_temp[c-1-i][j]=grid[j][i];
                    }
                }
                for(int i=0;i<10-1;i++)for(int j=0;j<10;j++)grid[i][j]=0;
                temp=c;c=r;r=temp;
                for(int i=0;i<r;i++)for(int j=0;j<c;j++)grid[i][j]=grid_temp[i][j];
            }
            else if(moveg[k]==1){
                swapg(grid, r, c);
            }
        }
        cout << r << ' ' << c << endl;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout << grid[i][j];
                if(j!=c-1){
                    cout << ' ';
                }
            }
            cout << endl;
        }
    }
}