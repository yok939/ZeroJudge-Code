#include <bits/stdc++.h>
using namespace std;

int p[26], amo[26];
string s1, s2;

int main(){
    memset(p, 0, sizeof(p));
    memset(amo, 0, sizeof(amo));
    cin >> s1 >> s2;
    int len = s1.length();
    for(int i = 0; i < len; i++){
        char c = s1[i];
        int got = (c >= 'A' && c <= 'Z' ? c - 'A' : c - 'a');
        p[got] += s2[i] - '0';
        amo[got]++;
    }
    for(int i = len - 1; i >= 0; i--){
        char c = s1[i]; 
        int got = (c >= 'A' && c <= 'Z' ? c - 'A' : c - 'a');
        int tmp = p[got] / amo[got] + (p[got] % amo[got] ? 1 : 0);
        s2[i] = tmp + '0';
        p[got] -= tmp;
        amo[got]--;
    }
    cout << s2 << '\n';
    return 0;
}