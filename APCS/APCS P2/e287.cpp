#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, m, total=0, start_min=INT_MAX, 
    x_now=0, y_now=0, x_add[4]={1, -1, 0, 0}, y_add[4]={0, 0, 1, -1};
    cin >> n >> m;
    vector<long long> width(m+2);
    vector<vector<long long>> map(n+2, width);
    vector<vector<long long>> been(n+2, width);
    for(int i=1;i<n+1;i++)for(int j=1;j<m+1;j++)cin >> map[i][j];
    
    //init
    for(int i=0;i<m+2;i++){been[0][i]=1;been[n+1][i]=1;}
    for(int i=0;i<n+2;i++){been[i][0]=1;been[i][m+1]=1;}
    //
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(map[i][j]<start_min){
                start_min=map[i][j];
                x_now=j;y_now=i;
            }
        }
    }
    // first land
    total+=map[y_now][x_now]; 
    been[y_now][x_now]=1;
    while(1){
        long move_min=INT_MAX, x_move=x_now, y_move=y_now;
        for(int i=0;i<4;i++){
            if(map[y_now+y_add[i]][x_now+x_add[i]]<move_min&&been[y_now+y_add[i]][x_now+x_add[i]]!=1){
                move_min=map[y_now+y_add[i]][x_now+x_add[i]];
                x_move=x_now+x_add[i];y_move=y_now+y_add[i];
            }
        }
        if(been[y_now][x_now+1]==1&&been[y_now][x_now-1]==1&&been[y_now+1][x_now]==1&&been[y_now-1][x_now]==1){
            break;
        }else{
            x_now=x_move;y_now=y_move;
            total+=map[y_now][x_now];
            been[y_now][x_now]=1;
        }
        
    }
    cout << total;
}