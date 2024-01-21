#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n, m, k, total=0, amount=0;
    cin >> n >> m >> k;
    amount=k;
    vector<int> length(n,0);
    vector<vector<int>> bomb(m, length);
    vector<int> loc_x(k,0);
    vector<int> loc_y(k,0);
    vector<int> add_x(k,0);
    vector<int> add_y(k,0);

    for(int i=0;i<k;i++){
        cin >> loc_x[i] >> loc_y[i] >> add_x[i] >> add_y[i];
    }
    do{
        for(int i=0;i<k;i++){
            if(loc_x[i]==-1&&loc_y[i]==-1) continue;
            bomb[loc_y[i]][loc_x[i]]=1;
            loc_x[i]+=add_x[i];
            loc_y[i]+=add_y[i];
            if(loc_x[i]>=n||loc_y[i]>=m||loc_x[i]<0||loc_y[i]<0){
                loc_x[i]=-1;loc_y[i]=-1;
                amount--;
            }
                
        }
        for(int i=0;i<k;i++){
            if(loc_x[i]==-1&&loc_y[i]==-1) continue;
            if(bomb[loc_y[i]][loc_x[i]]==1||bomb[loc_y[i]][loc_x[i]]==-1){
                bomb[loc_y[i]][loc_x[i]]=-1;
                loc_x[i]=-1;loc_y[i]=-1;
                amount--;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(bomb[i][j]==-1){
                    bomb[i][j]=0;
                }
            }
        }
    }while(amount);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(bomb[i][j]==1){
                total++;
            }
        }
    }
    cout << total;
}

