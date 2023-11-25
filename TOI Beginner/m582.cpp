#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> study(n);
    for(int i=0;i<n;i++){
        cin >> study[i];
    }
    for(int i=1;i<=m;i++){
        for(int j=0;j<n;j++){
            if(study[j]==i){
                cout << j+1 << ' ';
                study[j]=0;
                break;
            }
        }
    }
    return 0;

}
