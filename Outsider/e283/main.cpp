#include<iostream>
#include<map>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
map<string,string>mp;
void init(){
    mp["0 1 0 1"]="A"; mp["0 1 1 1"]="B"; mp["0 0 1 0"]="C";
    mp["1 1 0 1"]="D"; mp["1 0 0 0"]="E"; mp["1 1 0 0"]="F";
}
int main(){

    fastio;
    init();

    int N;
    while(cin>>N){
        string ans,ignore;
        getline(cin,ignore);
        while(N--){
            string s;
            getline(cin,s);
            ans+=mp[s];
        }
        cout<<ans<<"\n";
    }
    return 0;
}
