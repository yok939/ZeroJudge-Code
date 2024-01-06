#include <bits/stdc++.h>

using namespace std;

int c3n1(int n, int total){
    if(n==1){
        return total+1;
    }
    if(n%2){
        return c3n1(3*n+1, total+1);
    }
    return c3n1(n/2, total+1);
}

int main(){
    int a, b;
    while(cin >> a >> b){
        int max_output=INT_MIN, temp_output=0, temp;
        for(int i=min(a, b);i<=max(a, b);i++){
            temp=i;
            temp_output=c3n1(temp, 0);
            if(temp_output>max_output){
                max_output=temp_output;
            }
        }
        printf("%d %d %d\n", a, b, max_output);
    }
    return 0;
}