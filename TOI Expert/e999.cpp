#include <bits/stdc++.h>
#define LL long long 
using namespace std;

struct node{
    vector<LL> adj;
}p[1000005];

void dis(LL a, LL b){
    p[a].adj.push_back(b);
    return;
}

LL n, e, a, b, ans = 0;

void dfs(int now){
    if(now == n - 1) ans ++;
    else{
        for(auto i : p[now].adj){
            dfs(i);
        }
    }
    return;
}

int main(){
    cin >> n >> e;
    for(int i = 0; i < e; i++){
        cin >> a >> b;
        dis(a, b);
    }
    dfs(0);
    cout << ans << '\n';
}