#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s_amount[26], q, x;
    string n, temp;
    for(int i=0;i<26;i++){
        s_amount[i]=0;
    }
    cin >> n >> temp;
    vector<int> s_two_point(n.length());
    for(int i=0;i<temp.length();i++){
        s_amount[temp[i]-65]++;
    }
    s_two_point[0]=s_amount[n[0]-65];
    for(int i=1;i<n.length();i++){
        s_two_point[i]=s_two_point[i-1]+s_amount[n[i]-65];
    }
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> x;
        for(int j=0;j<n.length();j++){
            if(x<=s_two_point[j]){
                cout << n[j] << endl;
                break;
            }
        }
    }
}
