#include <bits/stdc++.h>

using namespace std;

int main(){
    int now, wise=1, a, b, c;
    while(cin >> now >> a >> b >> c&&(now!=0||a!=0||b!=0||c!=0)){
        int total=0;
        total+=360*2;
        total+=((now-a+40)%40)*9;
        wise*=-1;
        total+=360;
        total+=((b-a+40)%40)*9;
        wise*=-1;
        total+=((b-c+40)%40)*9;
        cout << total << '\n';
    }
    return 0;
}