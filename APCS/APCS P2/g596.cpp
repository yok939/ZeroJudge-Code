#include <bits/stdc++.h>

using namespace std;

int add_y[4]={0, 0, 1, -1};
int add_x[4]={1, -1, 0, 0};

int main(){
    int n, m, h, r, c, t, max_space=INT_MIN, space=0;
    cin >> n >> m >> h;
    vector<vector<char>> grid(n, vector<char>(m, '.'));
    while(h--){
        space=0;
        vector<vector<int>> connecter;
        connecter.clear();
        cin >> r >> c >> t;
        grid[r][c]=(t?'.':'#');
        //CHECK IF CAN LINE UP
        if(t==0){
            for(int k=0;k<4;k++){
                int t_y=r+add_y[k], t_x=c+add_x[k];
                while(t_y<n&&t_y>=0&&t_x<m&&t_x>=0){
                    if(grid[t_y][t_x]=='#'){
                        vector<int> mode(5);
                        mode[0]=r,mode[1]=c,mode[2]=t_y-add_y[k],mode[3]=t_x-add_x[k],mode[4]=k;
                        connecter.push_back(mode);
                        break;
                    }
                    t_y+=add_y[k], t_x+=add_x[k];
                }
            }
        }
        else{
            for(int k=0;k<4;k++){
                int t_y=r+add_y[k], t_x=c+add_x[k];
                while(t_y<n&&t_y>=0&&t_x<m&&t_x>=0){
                    if(grid[t_y][t_x]=='#'){
                        vector<int> mode(5);
                        mode[0]=r,mode[1]=c,mode[2]=t_y-add_y[k],mode[3]=t_x-add_x[k],mode[4]=k;
                        connecter.push_back(mode);
                        break;
                    }
                    t_y+=add_y[k], t_x+=add_x[k];
                }
            }
        }
        //CONNECT LINE
        for(int i=0;i<connecter.size();i++){
            int now_y=connecter[i][0], now_x=connecter[i][1]
               ,end_y=connecter[i][2], end_x=connecter[i][3];
            if(connecter[i][4]==0){
                while(now_x!=end_x){
                    now_x+=add_x[0];
                    if(t){
                        if(grid[now_y][now_x]=='X') grid[now_y][now_x]='|';
                        else grid[now_y][now_x]='.';
                    }
                    else{
                        if(grid[now_y][now_x]=='|'||grid[now_y][now_x]=='X') grid[now_y][now_x]='X';
                        else grid[now_y][now_x]='-';
                    }
                }
            }
            else if(connecter[i][4]==1){
                while(now_x!=end_x){
                    now_x+=add_x[1];
                    if(t){
                        if(grid[now_y][now_x]=='X') grid[now_y][now_x]='|';
                        else grid[now_y][now_x]='.';
                    }
                    else{
                        if(grid[now_y][now_x]=='|'||grid[now_y][now_x]=='X') grid[now_y][now_x]='X';
                        else grid[now_y][now_x]='-';
                    }
                }
            }
            else if(connecter[i][4]==2){
                while(now_y!=end_y){
                    now_y+=add_y[2];
                    if(t){
                        if(grid[now_y][now_x]=='X') grid[now_y][now_x]='-';
                        else grid[now_y][now_x]='.';
                    }
                    else{
                        if(grid[now_y][now_x]=='-'||grid[now_y][now_x]=='X') grid[now_y][now_x]='X';
                        else grid[now_y][now_x]='|';
                    }
                }
            }
            else if(connecter[i][4]==3){
                while(now_y!=end_y){
                    now_y+=add_y[3];
                    if(t){
                        if(grid[now_y][now_x]=='X') grid[now_y][now_x]='-';
                        else grid[now_y][now_x]='.';
                    }
                    else{
                        if(grid[now_y][now_x]=='-'||grid[now_y][now_x]=='X') grid[now_y][now_x]='X';
                        else grid[now_y][now_x]='|';
                    }
                }
            }
        }
        //FINAL COUNT
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='-'||grid[i][j]=='#'||grid[i][j]=='|'||grid[i][j]=='X') space++;
            }
        }
        max_space=max(max_space, space);
        /* //Debug
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout << grid[i][j] << ' ';
            }
            cout << '\n';
        }
        cout << '\n';
        */
    }
    printf("%d\n%d", max_space, space);
}