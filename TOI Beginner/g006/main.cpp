#include <iostream>

using namespace std;

int main()
{
    long long char_num[26];
    string s;
    cin >> s;
    for(int i=0;i<26;i++){
        char_num[i]=0;
    }
    for(int i=0;i<s.size();i++){
        char_num[s[i]-65]++;
    }
    for(int i=100;i>0;i--){
        for(int j=0;j<26;j++){
            if(char_num[j]==i){
                cout << char(j+65);
            }
        }
    }
}
