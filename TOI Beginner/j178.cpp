#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, power;
    cin >> t >> power;
    vector<int> enemy(t);
    for(int i=0;i<t;i++) cin >> enemy[i];
    for(int i=0;i<t;i++){
        if(power>enemy[i]) power+=enemy[i];
        else break;
    }
    cout << power;
    return 0;
}