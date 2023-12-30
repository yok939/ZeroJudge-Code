#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, value0=0, value1=0;
    cin >> n >> k;
    vector<int> gift(n);
    for(int i=0;i<n;i++){
        cin >> gift[i];
    }
    sort(gift.begin(), gift.end(), greater<int>());
    for(auto v:gift){
        if(value0<=value1){
            value0+=v;
        }
        else{
            value1+=v;
        }
    }
    cout << min(value0, value1) << ' ' << max(value0, value1);
    return 0;
}