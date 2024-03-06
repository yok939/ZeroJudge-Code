#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL p[int(4e5)+10];

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    LL n, m, room=0, target;
    cin >> n >> m;
    int i;
    for(i=0;i<n;i++) cin >> p[i];
    for(i=0;i<n;i++) p[i+n]=p[i];
    for(i=1;i<2*n;i++) p[i]+=p[i-1];
    for(i=0;i<m;i++){
        cin >> target;
        if(target!=0) target+=p[room-1];
        room=lower_bound(p+room, p+2*n, target)-p;
        room=(room+1)%n;
    }
    cout << room;
}