#include <bits/stdc++.h>
#define LL long long
#define N 100010
using namespace std;

LL parent[N]={0}, child[N], h[N];
queue<LL> Q;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    LL n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> child[i];
        if(child[i]==0){
            Q.push(i);
        }
        for(int j=0;j<child[i];j++){
            int t;
            cin >> t;
            parent[t]=i;
        }
    }
    LL root, total=0;
    while(true){
        int node=Q.front();
        Q.pop();
        total+=h[node];
        if(parent[node]==0){
            root=node;
            break;
        }
        int p=parent[node];
        h[p]=max(h[p], h[node]+1);
        if(--child[p]==0) Q.push(p);
    }
    cout << root << '\n' << total;
    return 0;
}