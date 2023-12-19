#include <bits/stdc++.h>

using namespace std;

int main(){
    int n=1, e=1;
    while(1){
        cin >> n;
        if(n==-1) break;
        cin >> e;
        int days=0, total=n*e, amount=n;
        while(total){
            for(int i=amount;i>0;i--){
                if(total<=e*(i)) amount=i;
            }
            total-=amount;days++;
        }
        cout << days << endl;
    }
    return 0;
}