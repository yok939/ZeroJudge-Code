#include <bits/stdc++.h>
using namespace std;

int n, h[105], ans = 1;

int main(){
    cin >> n;    
    for(int i = 0; i < n; i++){
        cin >> h[i];
    }
    int tmp = 1;
    for(int i = 1; i < n; i++){
        if(h[i] > h[i - 1]) tmp = 1;
        else tmp++;
        ans = max(tmp, ans);
    }
    cout << ans << '\n';
    return 0;
}