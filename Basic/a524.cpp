#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        string s;
        for(int i = n; i >= 1; i--){
            s = s + to_string(i);
        }
        do{
            cout << s << '\n';
        } while(prev_permutation(s.begin(), s.end()));
    }
    return 0;
}