#include <bits/stdc++.h>

using namespace std;
#define LL long long
LL n, k, d;
vector<LL> P(50005, 0);
vector<LL> pre(50005, 0);
vector<LL> rev(50005, 0);

LL rec(LL left, LL right, LL level){
    if(level==k||right-left<2){
        return 0;
    }
    LL delta=0;
    pre[left]=0;
    for(int i=left+1;i<=right;i++){
        delta+=P[i-1];
        pre[i]=pre[i-1]+delta;
    }
    delta=0;
    rev[right]=0;
    for(int i=right-1;i>=left;i--){
        delta+=P[i+1];
        rev[i]=rev[i+1]+delta;
    }
    LL mn=LONG_LONG_MAX;
    LL idx=0;
    for(int i=left+1;i<=right-1;i++){
        if(abs(pre[i]-rev[i])<mn){
            mn=abs(pre[i]-rev[i]);
            idx=i;
        }
        
    }
    return P[idx]+rec(left, idx-1, level+1)+rec(idx+1, right, level+1);
    
}


int main(){
    scanf("%d%d", &n, &k);
    for(int i=0;i<n;i++) scanf("%d", &P[i]);
    printf("%lld", rec(0, n-1, 0));
    return 0;
}