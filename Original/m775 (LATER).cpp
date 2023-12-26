#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t, p, k, temp;
    const unsigned int M = 1000000007;
    cin >> t;
    for(int i=0;i<t;i++){
        scanf("%lld %lld", &p, &k);
        long long bacteria=1;
        temp=p;
        for(int j=1;j<k;j++){
            bacteria=(bacteria+temp)%M;
            temp=(temp*p)%M;
        }
        
        printf("Case %d: %lld\n", i+1, bacteria);
    }
    return 0;
}