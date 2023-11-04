#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i=0;
    string t_1, t_2="";
    char n;
    cin >> t_1 >> n;
    while(t_1[i]){
        if(t_1[i]!=n){
            t_2+=t_1[i];
        }
        i++;
    }
    string part1="",part2="";
    if(t_2.length()==1){
        part1=part2=t_2;
    }
    else if(t_2.length()%2==0){
        for(int k=0;k<t_2.length()/2;k++){
            part1+=t_2[k];
        }
        for(int k=t_2.length()-1;k>t_2.length()/2-1;k--){
            part2+=t_2[k];
        }
    }
    else if(t_2.length()%2==1){
        for(int k=0;k<t_2.length()/2;k++){
            part1+=t_2[k];
        }
        for(int k=t_2.length()-1;k>t_2.length()/2;k--){
            part2+=t_2[k];
        }
    }
    if(part1==part2){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}

