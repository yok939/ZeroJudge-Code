#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, total=0;
    cin >> n;
    vector<int> time(n);
    for(int i=0;i<n;i++) cin >> time[i];
    sort(time.begin(), time.end());
    for(int i=0;i<n;i++){
        total+=time[i]*(n-i);
    }
    cout << total;
    return 0;
}