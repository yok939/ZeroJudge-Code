#include <bits/stdc++.h>
#define LL long long 
using namespace std;

LL n, k, p[50005], psum[50005], ans = 0;

LL rec(int L, int R, int lvl){
    if(lvl == k || (R - L < 3)) return 0;
    LL best = INT_MAX, dis = 0, pnt = L + 1, ppsum = psum[R] - psum[L];
    for(int i = L; i < R; i++) dis += (i - pnt) * p[i];
    best = abs(dis);
    for(int i = L + 2; i < R - 1; i++){
        dis -= ppsum;
        if(abs(dis) < best){
            pnt = i;
            best = abs(dis);
        }
    }
    return rec(L, pnt, lvl + 1) + rec(pnt + 1, R, lvl + 1) + p[pnt];
}

int main(){
    memset(psum, 0, sizeof(psum));
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> p[i];
        psum[i + 1] = psum[i] + p[i];
    }
    cout << rec(0, n, 0) << '\n';
    return 0;
}
