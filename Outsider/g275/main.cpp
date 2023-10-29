#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s1[7], s2[7];
    cin >> n;
    for(int i=0;i<n;i++){
        bool against_A = false, against_B = false, against_C = false;
        for(int j=0;j<7;j++){
            cin >> s1[j];
        }
        for(int j=0;j<7;j++){
            cin >> s2[j];
        }
        if(s1[1]!=s1[3]&&s1[1]==s1[5]&&s2[1]!=s2[3]&&s2[1]==s2[5]){
            against_A=false;
        }
        else{
            cout << "A";
            against_A=true;
        }
        if(s1[6]==1&&s2[6]==0){
            against_B=false;
        }
        else{
            cout << "B";
            against_B=true;
        }
        if(s1[1]!=s2[1]&&s1[3]!=s2[3]&&s1[5]!=s2[5]){
            against_C=false;
        }
        else{
            cout << "C";
            against_C=true;
        }
        if(against_A==false&&against_B==false&&against_C==false){
            cout << "None";
        }
        cout << endl;
    }
    return 0;
}
