#include <bits/stdc++.h>

using namespace std;

int main(){
    int m, n, k, step, differ=0;
    cin >> m >> n >> k;
    vector<int> total(52, 0);
    vector<char> width(n);
    vector<vector<char>> grid(m, width);
    vector<char> ans;
    int x=0, y=m-1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> grid[i][j];
        }
    }
    for(int i=0;i<k;i++){
        cin >> step;
        switch(step){
            case 0:
                if(y-1>=0){
                    y--;
                }
                break;
            case 1:
                if(x+1<n){
                    x++;
                }
                break;
            case 2:
                if(y+1<m&&x+1<n){
                    y++;x++;
                }
                break;
            case 3:
                if(y+1<m){
                    y++;
                }
                break;
            case 4:
                if(x-1>=0){
                    x--;
                }
                break;
            case 5:
                if(y-1>=0&&x-1>=0){
                    y--;x--;
                }
                break;
        }
        ans.push_back(grid[y][x]);
    }
    for(int i=0;i<ans.size();i++){
        if(ans[i]<='Z'&&ans[i]>='A') total[ans[i]-'A']++;
        else if(ans[i]<='z'&&ans[i]>='a') total[ans[i]-'a'+25]++;
        cout << ans[i];
    }
    for(int i=0;i<52;i++){
        if(total[i]>0) differ++;
    }
    cout << '\n' << differ;
}