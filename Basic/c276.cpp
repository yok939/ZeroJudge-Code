#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b;
    string ans, guess;
    cin >> ans >> n;
    while(n--){
        a=0, b=0;
        cin >> guess;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(guess[j]==ans[i]&&i==j) a++;
                else if(guess[j]==ans[i]&&i!=j) b++;
            }
        }
        printf("%dA%dB\n", a, b);
    }
}