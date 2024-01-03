#include <bits/stdc++.h>
using namespace std;
int main(){
    string input;
    while(cin >> input){
        int total=0, location=0;
        for(int i=0;i<input.length();i++){
            if(input[i]=='y'){
                total+=abs(location-i);
                location+=3;
            }
        }
        cout << total << '\n';
    }
    return 0;
}