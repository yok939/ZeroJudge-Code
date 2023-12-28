#include <bits/stdc++.h>
using namespace std;
int main(){
    string animals[12]={"鼠","牛","虎","兔"
                    ,"龍","蛇","馬","羊"
                    ,"猴","雞","狗","豬"};
    int year;
    ios_base::sync_with_stdio(false);
    while(cin >> year){
        if(year>=1){
            cout << animals[(year-1)%12];
        }
        else{
            cout << animals[abs((year%12+12)%12)];
        }
        cout << '\n';
    }
    return 0;
}