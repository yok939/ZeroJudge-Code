#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(scanf("%d", &n)!=-1){
        int a[1005]={0};
        for(int i=0;i<n;i++){
            scanf("%d", &a[i]);
        }
        sort(a, a+n);
        printf("%d", a[0]);
        for(int i=1; i<n; i++){
            printf(" %d", a[i]);
        }
        printf("\n");
    }
}