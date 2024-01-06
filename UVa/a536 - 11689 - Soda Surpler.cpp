#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    while(n--){
        int e,f,c,total=0,trade=0;
        cin >> e >> f >> c;
        total=e+f;
        while(total/c!=0){
            trade+=(total-(total%c))/c;
            total=total/c+(total%c);
        }
        cout << trade << '\n';
    }
}