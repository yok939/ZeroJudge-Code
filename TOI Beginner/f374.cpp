#include <iostream>
using namespace std;

int n, p, gr = 1, tick = 0, mx = 0, tmp = 0, ans = 0;

int main(){
    cin >> n >> p;
    do{
        tmp += p % 10;
        p /= 10;
        tick++;
        if(tick == n || p == 0){
            if(tmp >= mx){
                ans = gr;
                mx = tmp;
            }
            gr++;
            tmp = 0;
            tick = 0;
        }
    }while(p);
    cout << ans << ' ' << mx << '\n';
}