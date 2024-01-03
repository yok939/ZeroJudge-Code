#include <bits/stdc++.h>

using namespace std;

long long f(long long n){
    if(n==1){
        return 1;
    }
    return n+f(n-1);
}

long long g(long long n){
    if(n==1){
        return 1;
    }
    return f(n)+g(n-1);
}

int main(){
    long long n;
    while(cin >> n){
        printf("%lld %lld\n", f(n), g(n));
    }
}