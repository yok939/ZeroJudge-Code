#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    if(n%k==0){
        cout << "YES";
        return 0;
    }
    while(n){
        if(n%10==k){
            cout << "YES";
            return 0;
        }
        n/=10;
    }
    cout << "NO";
    return 0;
}