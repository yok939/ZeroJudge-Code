#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(cin >> s&& s!="0"){
        int score=0;
        for(auto c:s){
            if(c>='A'&&c<='Z') score+=c-64;
            else if(c>='a'&&c<='z') score+=c-96;
            else{
                score=-1;
                break;
            }
        }
        if(score==-1) cout << "Fail" << endl;
        else cout << score << endl;
    }
}