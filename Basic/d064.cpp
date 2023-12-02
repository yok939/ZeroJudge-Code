#include <bits/stdc++.h>

using namespace std;

int main(){
    int h, m;
    cin >> h >> m;
    if(h*60+m<17*60&&h*60+m>=7*60+30){
        cout << "At School";
    }
    else{
        cout << "Off School";
    }
    return 0;

}
