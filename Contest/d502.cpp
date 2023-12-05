#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d, total=0;
    while(cin >> a >> b >> c >> d){
        total=0;
        total+=d;
        total+=c;
        a-=37*c;
        total+=ceil(b/8.0);
        a-=8*(b%8);
        if(a>0){
            total+=ceil(a/64.0);
        }
        cout << total << endl;
    }
    return 0;
}