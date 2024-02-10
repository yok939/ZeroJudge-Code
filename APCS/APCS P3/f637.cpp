#include <bits/stdc++.h>

using namespace std;

string s; 
long long answer=0;
long long target=0;

void cut(int n){
    if(s[target]=='2'){
        target++;
        for(int j=0;j<4;j++){
            cut(n/2);
        }
    }
    else if(s[target]=='1'){
        answer+=n*n;
        target++;
        return;
    }
    else if(s[target]=='0'){
        target++;
        return;
    }
}

int main(){
    long long n;
    cin >> s;
    cin >> n;
    cut(n);
    cout << answer;
    return 0;
}