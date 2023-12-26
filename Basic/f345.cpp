#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> list_num(n);
    for(int i=0;i<n;i++)cin >> list_num[i];
    for(int i=n-1;i>=0;i--) cout << list_num[i] << ' ';
    return 0;
}