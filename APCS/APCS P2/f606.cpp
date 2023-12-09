#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, k, q[55][55], c[55][55], location=0, addup=0, total=0, min_total=INT_MAX;
    cin >> n >> m >> k;
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> q[i][j];
    for(int i=0;i<k;i++) for(int j=0;j<n;j++) cin >> c[i][j];
    for(int i=0;i<k;i++){
        total=0;
        for(int j=0;j<m;j++){
            location=j;
            for(int a=0;a<m;a++){
                addup=0;
                for(int b=0;b<n;b++){
                    if(c[i][b]==j){
                        addup+=q[b][a];
                    }
                }
                total+=(location==a?addup:addup>1000?3000+(addup-1000)*2:addup*3);
            }
        }
        min_total=min(total, min_total);
    }
    cout << min_total;
}