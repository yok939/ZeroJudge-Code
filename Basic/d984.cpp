#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, c;
    while(cin >> a >> b >> c){
        if(a>b&&a>c){
            if(b+c>a){
                cout << (b>c?'B':'C');
            }
            else{
                cout << 'A';
            }
        }
        else if(b>a&&b>c){
            if(a+c>b){
                cout << (a>c?'A':'C');
            }
            else{
                cout << 'B';
            }
        }
        else if(c>b&&c>a){
            if(b+a>c){
                cout << (b>a?'B':'A');
            }
            else{
                cout << 'C';
            }
        }
        cout << '\n';
    }
}
//example
// 1 3 5
// a b c
// to
// 0 4 5
// a b c