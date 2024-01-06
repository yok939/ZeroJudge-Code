#include <bits/stdc++.h>

using namespace std;

int f(int n){
    int total=0, temp=n;
    if(temp/10==0){
        return n;
    }
    while(temp){
      total+=temp%10;
      temp/=10; 
    }
    return f(total);
}


int main(){
    int n;
    while(cin >> n, n){
        cout << f(n) << '\n';
    }
    return 0;
}