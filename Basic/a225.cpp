#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        int temp;
        bool first_one=1;
        vector<int> list;
        vector<vector<int>> num(10, list);
        for(int i=0;i<n;i++){
            cin >> temp;
            num[temp%10].push_back(temp);
        }
        for(int i=0;i<10;i++){
            sort(num[i].begin(), num[i].end());
        }
        for(int i=0;i<10;i++){
            for(int j=num[i].size()-1;j>=0;j--){
                if(first_one){
                    cout << num[i][j];
                }
                else{
                    cout << ' ' << num[i][j] ;
                }
                first_one=0;
            }
        }
        cout << '\n';
    }
}