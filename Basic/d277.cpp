#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        cout << (n%2?n-1:n) << endl;
    }
    return 0;
}