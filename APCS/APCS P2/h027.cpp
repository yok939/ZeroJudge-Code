#include <bits/stdc++.h>

using namespace std;

int main(){
    int s, n, t, m, r, min_a=INT_MAX, subsn=0;
    cin >> s >> t >> n >> m >> r;
    vector<int> length_0(t);
    vector<vector<int>> a(s, length_0);
    vector<int> length_1(m);
    vector<vector<int>> b(n, length_1);
    int sn_total=0;
    for(int i=0;i<s;i++) for(int j=0;j<t;j++){cin >> a[i][j];sn_total+=a[i][j];}
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> b[i][j];
    for(int i=0;i<=n-s;i++){
        for(int j=0;j<=m-t;j++){
            int r_count=0, subsn_total=0;
            for(int k=0;k<s;k++){
                for(int p=0;p<t;p++){
                    subsn_total+=b[k+i][p+j];
                    if(a[k][p]!=b[k+i][p+j]){
                        r_count++;  
                    }
                }
            }
            if(r_count<=r){
                subsn++;
                min_a=min(abs(subsn_total-sn_total), min_a);
            }
        }
    }
    cout << subsn << '\n' << (min_a==INT_MAX?-1:min_a);
}