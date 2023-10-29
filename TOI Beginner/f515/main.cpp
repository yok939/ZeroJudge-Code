#include <iostream>

using namespace std;

int main()
{
    string S, S_for="FOR",S_to="TO",S_and="AND",S_you="YOU";
    long long first_letter= -1;
    getline(cin, S);
    for(int i=0;S[i];i++){
        if(S[i]>='a'&&S[i]<='z'){
            S[i]=S[i]+'A'-'a';
        }
    }
    S = S + ' ';
    for(int i=0;i<=S.length();i++){

        if(S[i]>='A'&&S[i]<='Z'&&first_letter== -1){
            first_letter=i;
        }
        if(S[i]==' '){
            if(S.find(S_for)==first_letter&&!(S[first_letter+3]>='A'&&S[first_letter+3]<='Z')){
                cout << '4';
                S[first_letter]=' ';
                S[first_letter+1]=' ';
                S[first_letter+2]=' ';
            }
            else if(S.find(S_to)==first_letter&&!(S[first_letter+2]>='A'&&S[first_letter+2]<='Z')){
                cout << '2';
                S[first_letter]=' ';
                S[first_letter+1]=' ';
            }
            else if(S.find(S_and)==first_letter&&!(S[first_letter+3]>='A'&&S[first_letter+3]<='Z')){
                cout << 'n';
                S[first_letter]=' ';
                S[first_letter+1]=' ';
                S[first_letter+2]=' ';
            }
            else if(S.find(S_you)==first_letter&&!(S[first_letter+3]>='A'&&S[first_letter+3]<='Z')){
                cout << 'u';
                S[first_letter]=' ';
                S[first_letter+1]=' ';
                S[first_letter+2]=' ';
            }
            else{
                cout << S[first_letter];
            }
            first_letter= -1;
        }

    }





    return 0;
}
