#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if(a>b) swap(a, b);
    a%2 && a++;
    b%2 && b--;
    cout << (a+b)*((b-a)/2+1)/2;

}