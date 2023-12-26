#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x[105], y[105], r, l, r_total=0, l_total=0;
    cin >> n;
    for(int i=0;i<n;i++) cin >> x[i];
    for(int i=0;i<n;i++) cin >> y[i];
    cin >> r >> l;
    for(int i=0;i<n;i++){
        r_total+=x[i];l_total+=y[i];
        if(r_total>=r&&l_total>=l){
            cout << i+2;
            return 0;
        }
    }
    cout << -1;
    return 0;
}