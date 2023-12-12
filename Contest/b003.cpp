#include <bits/stdc++.h>

using namespace std;

int main(){
    int k;
    int n, sum;
    while(cin >> k){
        k=abs(k);
        n=1;
        while(1){
            sum=n*(n+1)/2;
            if(sum>=k&&(sum-k)%2==0){
                cout << n << '\n';
                break;
            }
            n++;
        }
    }
    return 0;

}