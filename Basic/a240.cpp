#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        int sum=0, ans[n], num=1;
        for(int i=0;i<n;i++) {
            num*=10;
            ans[i]=num/17;
            num-=ans[i]*17;
            sum+=ans[i];
        }
        printf("%d %d\n", ans[n-1], sum);
    }
}