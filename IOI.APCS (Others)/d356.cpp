#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i=1;
    double sum=0;
    cin >> n;
    while(sum<n){
        double j=1.0/i;
        sum+=j;
        i++;
    }
    cout << i-1;
    return 0;
}