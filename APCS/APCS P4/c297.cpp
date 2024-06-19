#include <bits/stdc++.h>
using namespace std;

int a, b, total = 0, total2 = 0, ans = 0, buffer[4];
string sinfo[9][5];

int main(){
    for(int i = 0; i < 9; i++){
        cin >> a;
        for(int j = 0; j < a; j++){
            cin >> sinfo[i][j];
        }
    }    
    cin >> b;
    int clk = 0, k = 0;
    while(total != b){
        k = 0;
        string tmp = sinfo[clk % 9][clk / 9];
        if(tmp == "HR"){
            buffer[0] = 1;
            k = 4;
        }
        else if(tmp[1] == 'B'){
            buffer[0] = 1;
            k = tmp[0] - '0';
        }
        else if(tmp[1] == 'O'){
            total++;
            total2++;
        }
        if((total2 % 3) == 0 && total2 != 0){
            k = 0;
            for(int i = 0; i < 4; i++){
                buffer[i] = 0;
            }
            total2 = 0;
        }
        for(int i = 3; i >= 0; i--){
            if(buffer[i] && k != 0){
                if(i + k > 3){
                    ans++;
                    buffer[i] = 0;
                }
                else{
                    buffer[i + k] = 1;
                    buffer[i] = 0;
                }
            }
        }
        clk++;
    }
    cout << ans << '\n';
    return 0;
}