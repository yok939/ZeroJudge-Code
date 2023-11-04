#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m=0, s[30], x, i;
    while(cin >> s[m], s[m]){
        m++;
    }
    cin >> n;
    while(n--){
        int t[30]={};
        t[1]+=s[0]>s[1]?s[0]/10:0;
        for(x=1;x<m-1;x++){
            t[x-1]+=s[x]>s[x-1]?s[x]/20:0;
            t[x+1]+=s[x]>s[x+1]?s[x]/20:0;
        }
        t[m-2]+=s[m-1]>s[m-2]?s[m-1]/10:0;
        for(i=0;i<m;i++){
            s[i]+=t[i];
        }
    }
    for(i=0;i<m;i++){
        cout << s[i] << ' ';
    }

}
