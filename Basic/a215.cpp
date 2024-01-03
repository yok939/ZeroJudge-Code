#include <bits/stdc++.h>
using namespace std;
int main(){
    double n, m;
    int ans;
    while(cin >> n >> m){
        if(n>m){
            cout << 1 << '\n';
        }
        else if(n==m){
            cout << 2 << '\n';
        }
        else{
            ans=(((1-2*n)+sqrt((2*n-1)*(2*n-1)+8*m))/2);
            cout << ans+1 << '\n';
        }
    }
    return 0;
}


