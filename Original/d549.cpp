#include <bits/stdc++.h>

using namespace std;

int main(){
    double pa, pb, pc, pd;
    cout << fixed << setprecision(2);
    while(cin >> pa >> pb >> pc){
        pd=pow(pa*pa+pc*pc-pb*pb, 0.5);
        cout << pd << endl;

    }
    return 0;
}