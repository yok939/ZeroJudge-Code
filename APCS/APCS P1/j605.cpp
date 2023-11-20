#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, w=0;
    int highest_s=INT_MIN, highest_t=0;
    cin >> k;
    vector<int> t(k);
    vector<int> s(k);
    for(int i=0;i<k;i++){
        cin >> t[i] >> s[i];
        if(s[i]== -1){
            w++;
        }
    }
    for(int i=0;i<k;i++){
        s[i]=s[i]-k-w*2;
        if(s[i]<0){
            s[i]=0;
        }
        if(s[i]>highest_s){
            highest_t=t[i];
            highest_s=s[i];
        }
    }
    cout << highest_s << " "<< highest_t;
}
