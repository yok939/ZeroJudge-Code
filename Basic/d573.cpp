#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, member[100005], member_temp, find_temp, group_count, group_index;
    while(cin >> n){
        for(int i=0;i<20;i++)member[i]=0;
        for(int i=0;i<n;i++){
            cin >> group_index >> group_count;
            for(int j=0;j<group_count;j++){
                cin >> member_temp;
                member[member_temp-1]=group_index;
            }
        }

        cin >> find_temp;
        cout << member[find_temp-1] << '\n';
    }
    return 0;
}