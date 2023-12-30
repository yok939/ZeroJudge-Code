#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) 
{ 
    int result = min(a, b); 
    while (result > 0) { 
        if (a % result == 0 && b % result == 0) { 
            break; 
        } 
        result--; 
    } 
    return result; 
} 

int main(){
    int n, school[505], big_gcd;
    while(cin >> n){
        for(int i=0;i<n;i++) cin >> school[i];
        big_gcd=gcd(school[0], school[1]);

        for(int i=2;i<n;i++){
            big_gcd=gcd(big_gcd, school[i]);
        }
        cout << big_gcd << endl;
    }
    return 0;
}