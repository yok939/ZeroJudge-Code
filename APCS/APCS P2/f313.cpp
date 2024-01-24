#include <bits/stdc++.h>

using namespace std;

int add_x[4]={1, -1, 0, 0};
int add_y[4]={0, 0, 1, -1};

int main(){
    int r, c, k, m, citizen_min=INT_MAX, citizen_max=INT_MIN;
    cin >> r >> c >> k >> m;
    vector<vector<int>> citizen(r, vector<int>(c, 0));
    vector<vector<int>> add_up(r, vector<int>(c, 0));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> citizen[i][j];
        }
    }
    while(m--){
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                add_up[i][j]=0;
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                for(int d=0;d<4;d++){
                    if(i+add_y[d]>=0&&i+add_y[d]<r&&j+add_x[d]>=0&&j+add_x[d]<c&&citizen[i+add_y[d]][j+add_x[d]]!=-1&&citizen[i][j]!=-1){
                        add_up[i][j]-=citizen[i][j]/k;
                        add_up[i+add_y[d]][j+add_x[d]]+=citizen[i][j]/k;
                    }
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                citizen[i][j]+=add_up[i][j];
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(citizen[i][j]!=-1){
                citizen_min=min(citizen_min, citizen[i][j]);
                citizen_max=max(citizen_max, citizen[i][j]);
            }
        }
    }
    printf("%d\n%d", citizen_min, citizen_max);
    return 0;
}