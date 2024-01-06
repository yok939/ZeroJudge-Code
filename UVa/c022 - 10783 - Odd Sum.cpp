#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, a, b;
    cin >> t;
    for(int i=1;i<=t;i++){
        int sum=0;
        cin >> a >> b;
        for(int j=(a%2==0?a+1:a);j<=b;j+=2){
            sum+=j;
        }
        printf("Case %d: %d\n", i, sum);
    }
    return 0;
}