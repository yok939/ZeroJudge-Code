#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        cout << ((n+1)*((n*n)-n+6))/6 << endl;
    }
    return 0;

}