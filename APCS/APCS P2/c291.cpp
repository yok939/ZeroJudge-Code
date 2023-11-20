#include <bits/stdc++.h>
#define Max 50005

using namespace std;

bool vis[Max];
int people[Max];
int group = 0;

void dfs(int i){
    if(vis[i]) return;
    vis[i] = true;
    if(vis[people[i]])
        group++;
    dfs(people[i]);
}


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<n;i++) cin >> people[i];
    for(int i=0;i<n;i++) dfs(people[i]);
    cout << group;
    return 0;
}
