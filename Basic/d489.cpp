#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b ,c;
    cin >> a >> b >> c;
    int s=(a+b+c)/2;
    cout << s*(s-a)*(s-b)*(s-c);
    return 0;
}