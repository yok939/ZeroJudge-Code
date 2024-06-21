#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    cin >> n;
    while(to_string(n).length() > 1){
        if(to_string(n).length() == 4){
            int p1 = n / 100, p2 = n % 100;
            p1 = (p1 % 10) * (p1 / 10);
            p2 = (p2 < 10 ? p2 : (p2 % 10) * (p2 / 10));
            n = stoi(to_string(p1) + to_string(p2));
        }
        else if(to_string(n).length() == 3){
            int p1, p2;
            p1 = (n / 100) * ((n % 100) / 10);
            p2 = ((n % 100) / 10) * ((n % 10));
            n = stoi(to_string(p1) + to_string(p2));
        }
        else if(to_string(n).length() == 2){
            int p1 = n / 10, p2 = n % 10;
            if(p1 == 0) p1 = 1;
            n = p1 * p2;
        }
    }
    cout << n << '\n';
    return 0;
}