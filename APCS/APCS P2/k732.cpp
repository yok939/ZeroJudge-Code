#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, total_ma=0;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));
    vector<int> ma_x;
    vector<int> ma_y;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int total=0;
            for(int k=0;k<n;k++){
                for(int p=0;p<m;p++){
                    if(abs(i-k)+abs(j-p)<=a[i][j]){
                        total+=a[k][p];
                    }
                }
            }
            if(total%10==a[i][j]){
                total_ma++;
                ma_x.push_back(j);
                ma_y.push_back(i);
            }
        }
    }
    cout << total_ma;
    for(int i=0;i<total_ma;i++){
        printf("\n%d %d", ma_y[i], ma_x[i]);
    }
    return 0;
}