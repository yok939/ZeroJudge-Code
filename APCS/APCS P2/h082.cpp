#include <bits/stdc++.h>



using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<long long> lose(n, 0);
    vector<long long> s(n);
    vector<long long> t(n);
    vector<long long> idx(n);
    vector<int> win_index;
    vector<int> lose_index;
    int amount=n;
    for(int i=0;i<n;i++) cin >> s[i];
    for(int i=0;i<n;i++) cin >> t[i];
    for(int i=0;i<n;i++){
       cin >> idx[i];
       idx[i]--;
    }
    while(amount>1){
        win_index.clear();
        lose_index.clear();
        for(int i=0;i<amount-(amount%2);i+=2){
            long long a=s[idx[i]], b=t[idx[i]], c=s[idx[i+1]], d=t[idx[i+1]];
            long long ans_1=a*b, ans_2=c*d;
            if(ans_1>=ans_2){
                s[idx[i]]=a+(c*d)/(2*b), t[idx[i]]=b+(c*d)/(2*a);
                s[idx[i+1]]=c+c/2, t[idx[i+1]]=d+d/2;
                lose[idx[i+1]]++;
                win_index.push_back(idx[i]);
                if(lose[idx[i+1]]!=m) lose_index.push_back(idx[i+1]);
            }
            else{
                s[idx[i]]=a+a/2, t[idx[i]]=b+b/2;
                s[idx[i+1]]=c+(a*b)/(2*d), t[idx[i+1]]=d+(a*b)/(2*c);
                lose[idx[i]]++;
                win_index.push_back(idx[i+1]);
                if(lose[idx[i]]!=m) lose_index.push_back(idx[i]);
            }
        }
        if(amount%2) win_index.push_back(idx[amount-1]);
        idx.clear();
        for(int i=0;i<win_index.size();i++) idx.push_back(win_index[i]);
        for(int i=0;i<lose_index.size();i++) idx.push_back(lose_index[i]);
        for(int i=0;i<n;i++){
            if(lose[i]==m){
                amount--;
                lose[i]=-1;
            }
        }
    }
    cout << idx[0]+1;
    return 0;
}