#include <bits/stdc++.h>
#define LL long long
using namespace std; 

struct node{
    int w, a, s, d;
}gr[505][505];

LL n, m, ans = 0;
bool vis[505][505], leak = 0;
char c, mp[505][505];

LL dfs(int nx, int ny){
    int total = 0;
    if(gr[nx][ny].w){
        if(gr[nx - 1][ny].s){
            if(!vis[nx - 1][ny]){
                vis[nx - 1][ny] = 1;
                total += dfs(nx - 1, ny);
            }
        }
    }
    if(gr[nx][ny].s){
        if(gr[nx + 1][ny].w){
            if(!vis[nx + 1][ny]){
                vis[nx + 1][ny] = 1;
                total += dfs(nx + 1, ny);
            }
        }
    }
    if(gr[nx][ny].a){
        if(gr[nx][ny - 1].d){
            if(!vis[nx][ny - 1]){
                vis[nx][ny - 1] = 1;
                total += dfs(nx, ny - 1);
            }
        }
    }
    if(gr[nx][ny].d){
        if(gr[nx][ny + 1].a){
            if(!vis[nx][ny + 1]){
                vis[nx][ny + 1] = 1;
                total += dfs(nx, ny + 1);
            }
        }
    }
    return 1 + total;
}

int main(){
    for(int i = 0; i < 505; i++){
        for(int j = 0; j < 505; j++){
            gr[i][j] = {0, 0, 0, 0};
            vis[i][j] = 0;
        }
    }
    cin >> n >> m; 
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){ 
            cin >> c;
            if(c == 'F') gr[i][j] = {0, 0, 1, 1};
            else if(c == 'H') gr[i][j] = {0, 1, 0, 1};
            else if(c == '7') gr[i][j] = {0, 1, 1, 0};
            else if(c == 'I') gr[i][j] = {1, 0, 1, 0};
            else if(c == 'X') gr[i][j] = {1, 1, 1, 1};
            else if(c == 'L') gr[i][j] = {1, 0, 0, 1};
            else if(c == 'J') gr[i][j] = {1, 1, 0, 0};
            else if(c == '0') gr[i][j] = {0, 0, 0, 0};
            mp[i][j] = c;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(!vis[i][j] && mp[i][j] != '0'){
                vis[i][j] = 1;
                ans = max(ans, dfs(i, j));
            } 
        }
    }
    cout << ans << '\n';
}