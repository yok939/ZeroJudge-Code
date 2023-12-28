#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    char c;
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    bool column[m]={}, row[n]={};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> c;
            if(c=='#'){
                column[j]=row[i]=true;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << (column[j]||row[i]?'#':'X');
        }
        cout << endl;
    }
}