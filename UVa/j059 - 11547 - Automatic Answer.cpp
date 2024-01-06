#include <bits/stdc++.h>

using namespace std;

long long f(int n){
    return (((((((n*567)/9)+7492)*235)/47)-498)/10)%10;
}

int main(){
    int n, t;
    cin >> t;
    while(t--){
        cin >> n;
        cout << abs(f(n)) << '\n';
    }
    return 0;
}