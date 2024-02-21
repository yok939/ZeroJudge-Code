#include <bits/stdc++.h>
using namespace std;
#define LL long long

int main(){
    LL m, n;
    cin >> m >> n;
    vector<char> cde(n);
    vector<vector<char>> move(m, vector<char>(n, '0'));
    vector<char> isodd(m, 'N');
    for(int i=0;i<m;i++){
        int clock=0;
        for(int j=0;j<n;j++){
            cin >> move[i][j];
            if(move[i][j]=='1') clock++;
        }
        if(clock%2==0) isodd[i]='N';
        else isodd[i]='Y';
    }
    for(int i=0;i<n;i++){
        cin >> cde[i];
    }
    for(int i=m-1;i>=0;i--){
        string temp;
        for(int j=n-1;j>=0;j--){
            if(move[i][j]=='1'){
                temp=temp+cde[j];
            }
            else temp=cde[j]+temp;
        }
        if(isodd[i]=='Y'){
            for(int j=0;j<cde.size()/2;j++){
                swap(temp[j], temp[j+ceil(cde.size()/2.0)]);
            }
        }
        for(int j=0;j<n;j++){
            cde[j]=temp[j];
        }
    }
    for(int i=0;i<n;i++){
        cout << cde[i];
    }
    return 0;
}