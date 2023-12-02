#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    while(cin >> n >> k){
        if(!n||k&&!(n%k)){
            cout << "Ok!\n";
        }
        else{
            cout << "Impossib1e!\n";
        }
    }
    return 0;
}