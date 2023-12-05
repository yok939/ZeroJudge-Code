#include <bits/stdc++.h>

using namespace std;

int main(){
    int age;
    cin >> age;
    if(age<=5) cout << 0;
    else if(age>=6&&age<=11) cout << 590;
    else if(age>=12&&age<=17) cout << 790;
    else if(age>=18&&age<=59) cout << 890;
    else if(age>=60) cout << 399;
    return 0;

}