#include <bits/stdc++.h>

using namespace std;
vector<pair<int, int>> fans(100005);
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(a.second==b.second) return a.first<b.first;
    return a.second>b.second;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m, id, x;
    scanf("%d%d", &n, &m);
    
    for(int i=0;i<n;i++){
        fans[i].first=i;
        fans[i].second=0;
    }
    while(m--){
        scanf("%d%d", &id, &x);
        fans[id].second+=x;
    }
    sort(fans.begin(),fans.begin()+n,cmp);
    for(int i=0;i<n;i++){
        printf("%d %d\n", fans[i].first, fans[i].second);
    }
    

}