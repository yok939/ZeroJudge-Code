#include <bits/stdc++.h>

using namespace std;


int main(){
    int f[50];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<50;i++) f[i]=f[i-1]+f[i-2];
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("%d\n",f[n+1]);
    }
    return 0;
}
