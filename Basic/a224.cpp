#include <bits/stdc++.h>

using namespace std;

int main(){
    string input;
    while(cin >> input){
        int odd=0, even=0, total=0;
        string temp="";
        vector<int> letter(26, 0);
        for(auto c:input){
            if(c>='A'&&c<='Z'){
                letter[c-'A']++;
                temp+=c;
            }
            else if(c>='a'&&c<='z'){
                letter[c-'a']++;
                temp+=c;
            }
        }
        for(int i=0;i<26;i++){
            if(letter[i]>0){
                total++;
                if(letter[i]%2){
                    odd++;
                }
                else{
                    even++;
                }
            }
        }
        if(temp.length()%2==1){
            if(odd>1||odd<1){
                cout << "no...\n";
            }
            else{
                cout << "yes !\n";
            }
        }
        else{
            if(odd>0){
                cout << "no...\n";
            }
            else{
                cout << "yes !\n";
            }
        }
    }
    
}