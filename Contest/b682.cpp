#include <bits/stdc++.h>
using namespace std;
int main(){
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;
    if(h1*60+m1>h2*60+m2){
        printf("%d %d", (24*60-h1*60-m1+h2*60+m2)/60, (24*60-h1*60-m1+h2*60+m2)%60);
    }
    else{
        printf("%d %d", (h2*60+m2-h1*60-m1)/60, (h2*60+m2-h1*60-m1)%60);
    }
}