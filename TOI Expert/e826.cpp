#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m, id, x;
    scanf("%d %d", &n, &m);
    vector<pair<int, int>> fans(n);
    for(int i=0;i<n;i++){
        fans[i].first=i;
        fans[i].second=0;
    }
    while(m--){
        scanf("%d %d", &id, &x);
        fans[id].second+=x;
    }
    for(int i=0;i<n;i++){
        printf("%d %d\n", fans[i].first, fans[i].second);
    }
    

}