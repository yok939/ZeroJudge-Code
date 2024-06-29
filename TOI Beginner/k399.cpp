#include <bits/stdc++.h>
using namespace std;

int num[55], total = 0;
string s;

int main(){
    memset(num, -1, sizeof(num));
    cin >> s;
    int len = s.size();
    for(int i = len - 1, tmp = 0; i >= 0; i--){
        char c = s[i];
        if(num[(c >= 'A' && c <= 'Z' ? c - 'A' : c - 'a' + 26)] == -1){
            total++;
            num[(c >= 'A' && c <= 'Z' ? c - 'A' : c - 'a' + 26)] = tmp++;
        }
    }
    for(int i = 0; i < 52; i++){
        if(num[i] != -1) cout << total - num[i];
    }
    cout << '\n';
    return 0;
}