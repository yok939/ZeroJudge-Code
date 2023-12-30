#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n, m;
    while(cin >> n >> m)
        cout << (n==m?m:m+1) << '\n';
    return 0;
}