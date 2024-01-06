#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin>>n, n){
        if(n<=100){
            printf("f91(%d) = %d\n",n , 91);
        }
        if(n>100){
            printf("f91(%d) = %d\n",n , n-10);
        }
    }
}