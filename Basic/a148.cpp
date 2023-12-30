#include <bits/stdc++.h>
using namespace std;
int main(){
    double total=0, n, temp;
    while(cin >> n){
        total=0;
        for(int i=0;i<n;i++){
            cin >> temp;total+=temp;
        }
        cout << (total/n>59?"no\n":"yes\n");
    }
}