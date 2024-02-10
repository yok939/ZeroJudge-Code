#include <bits/stdc++.h>

using namespace std;
vector<long long> p(50005, 0);


vector<long long> pre(50005, 0);
vector<long long> rev(50005, 0);
vector<long long> ppre(50005, 0);
vector<long long> rrev(50005, 0);
long long cutter(long long l, long long r, long long level){
    int n = r-l+1;
    if(level==0||r-l<3){
        return 0;
    }
    ppre[l] = pre[l] = rrev[r] = rev[r] = p[r];
    for(int i = l+1; i<=r; ++i){pre[i] = pre[i-1]+p[i-1];}
    for(int i = r-1; i>=l; --i){rev[i] = rev[i+1]+p[i+1];}
    for(int i = l+1; i<=r; ++i){ppre[i] = ppre[i-1]+pre[i];}
    for(int i = r-1; i>=l; --i){rrev[i] = rrev[i+1]+rev[i];}
    long long min_h=LONG_LONG_MAX;
    long long h;
    for(int i=l+1;i<r;++i){
        long long cost=abs(ppre[i-1]-rrev[i+1]);
        if(cost<min_h||(cost==min_h&&i<h)){
            min_h=cost;
            h=i;
        }
    }
    return p[h]+cutter(l, h-1, level-1)+cutter(h+1, r, level-1);
}

int main(){
    int n, k;
    cin >> n >> k;
    p.resize(n);pre.resize(n);ppre.resize(n); rev.resize(n); rrev.resize(n);
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    cout << cutter(0, n-1, k);
}

