#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, i=0, j=0;
    cin >> n >> m;
    i=0, j=n;
    do{
        if(i*2+j*3==m*8){
            cout << "Yes";
            return 0;
        }
        i++;j--;
    }while(i<=n);
    if(i*2+j*3>m*8){
        cout << "Not enough";
    }
    else if(i*2+j*3<m*8){
        cout << "Too much";
    }
    return 0;
}