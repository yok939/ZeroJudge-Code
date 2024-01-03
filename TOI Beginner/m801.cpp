#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, first="", second="";
    int location=0;
    cin >> s;
    for(auto c:s){
        if(c!='A'&&c!='H'&&c!='I'&&c!='M'&&c!='O'&&c!='T'&&c!='U'&&c!='V'&&c!='W'&&c!='X'&&c!='Y'){
            cout << "No";
            return 0;
        }
    }
    for(int i=0;i<s.length();i++){
        if(i<s.length()/2){
            first+=s[i];
        }
        else{
            second=s[i]+second;
        }
    }
    if(s.length()%2){
        second.pop_back();
    }
    if(first==second){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}
