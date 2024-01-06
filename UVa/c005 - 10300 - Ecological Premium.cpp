#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    while(n--){
        long long f, a, b, c, total=0;
        cin >> f;
        while(f--){
            cin >> a >> b >> c;
            total+=a*c;
        }
        cout << total << '\n';
    }
}