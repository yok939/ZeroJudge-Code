#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, max_size=0;
    string s[205];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s[i];
        if(s[i].length()>max_size){
            max_size=s[i].length();
        }
    }
    for(int i=0;i<max_size;i++){
        for(int j=0;j<n;j++){
            if(s[j].size() <= i) continue;
            if(isalpha(s[j][i])){
                cout << s[j][i];
            }
        }
    }
    cout << "\n";
    return 0;
}
