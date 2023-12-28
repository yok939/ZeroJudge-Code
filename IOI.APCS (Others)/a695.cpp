#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    bool isPrime;
    cin >> n;
    for(int i=2;i<=sqrt(n);i++){
        isPrime=true;
        for(int p=2;isPrime&&p<=sqrt(i);p++){
            if(!(i%p)) isPrime=false;
        }
        if(isPrime&&!(n%i)){
            cout << n/i;
            break;
        }
    }
    return 0;
}