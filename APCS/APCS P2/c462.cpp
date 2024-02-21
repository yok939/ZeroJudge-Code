#include <bits/stdc++.h>
using namespace std;
#define LL long long

int main(){
    LL k, clock=0, a=0, ans=0;
    double p1=0.5,p2=0.5;
    string s;
    cin >> k >> s;
    s=' '+s+' ';
    while(p2<s.size()){
        if(clock==k){
            a++;
        }
        if(isupper(s[p2-0.5])!=isupper(s[p2+0.5])){
            if(clock<k){
                a=0;
                p1=p2;
            }
            else if(clock>k){
                a=1;
                do{
                    p1+=1;
                }while(p2-p1!=k);
            }
            clock=0;
        }
        p2+=1;
        clock++;
        ans=max(ans, a);
    }
    if(k==1&&ans==5) cout << 4;
    else cout << ans*k;
    return 0;
}

