#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    while(cin >> a){
        vector<int> v(a);
        for(int i=0;i<a;i++) cin >> v[i];
        sort(v.begin(), v.end());
        for(int i=0;i<a;i++) cout << v[i] << ' ';
        cout << '\n';
    }
    return 0;
}