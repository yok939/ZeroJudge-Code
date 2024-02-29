#include <bits/stdc++.h>
using namespace std;
#define LL long long

LL n, k, L=1, mid=((LL)1e9+1)/2, R=1e9, min_k=0;

bool check(int len, vector<int> p){
    int cnt=1,right=p[0]+len;
    for(int i=1;i<n;i++){
        if(p[i]<=right){
            continue;
        }
        else{
            cnt++;
            right=p[i]+len;
        }
    }
    return cnt<=k;
}

int main(){
    cin >> n >> k;
    vector<int> p(n);
    vector<int> d;
    for(int i=0;i<n;i++) cin >> p[i];
    sort(p.begin(), p.end());
    while(L!=R){
        //printf("%d %d %d\n", L, mid, R);
        if(R-L>1){
            if(check(mid, p)){ 
                d.push_back(mid);
                R=mid;
            }
            else L=mid;
            mid=(R+L)/2;
        }
        else{
            if(check(R, p)) d.push_back(R);
            if(check(L, p)) d.push_back(L);
            break;
        }
    }
    sort(d.begin(), d.end());
    cout << d[0];
    return 0;
}