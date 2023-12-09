#include <bits/stdc++.h>

using namespace std;

int main(){
    string input, part1="", part2="";
    cin >> input;
    if(input.length()%2==0){
        for(int i=0;i<input.length()/2;i++){
            part1+=input[i];
        }
        for(int i=input.length()-1;i>=input.length()/2;i--){
            part2+=input[i];
        }
        if(part1==part2) cout << "YES\n" << part1;
        else cout << "NO";
        return 0;
    }
    else{
        cout << "NO";
        return 0;
    }
}