#include <bits/stdc++.h>

using namespace std;

int main(){
    long long L, x;
    while(cin >> L){
        x=L/4;
        cout << x*((L/2)-x) << '\n';
    }
    return 0;
}