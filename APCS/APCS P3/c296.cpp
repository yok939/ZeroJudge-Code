#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL n, m, k, id = 0;

int main(){
    cin >> n >> m >> k;
    for(int i = n - k + 1; i <= n; i++){
        id = (id + m) % i;
    }
    cout << id + 1 << '\n';
    return 0;
}