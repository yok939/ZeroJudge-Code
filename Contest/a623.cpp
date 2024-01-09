#include <bits/stdc++.h>

using namespace std;

int counter(int n){
    if(n==0) return 1;
    return n*counter(n-1);
}

int main() {
    int n, m;
    while(cin >> n >> m){
        cout << counter(n)/(counter(m)*counter(n-m)) << '\n';
    }
   return 0;
}
