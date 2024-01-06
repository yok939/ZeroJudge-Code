#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int j=1;j<=t;j++){
        int n, last=0, now=0, low=0, high=0;
        cin >> n;
        cin >> last;
        for(int i=0;i<n-1;i++){
            cin >> now;
            if(now-last<0) low++;
            else if(now-last>0) high++;
            last=now;
        }
        printf("Case %d: %d %d\n", j, high, low);
    }
}