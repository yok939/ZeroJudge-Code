#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, temp0, temp1;
    bool first_wave=1;
    cin >> n;
    vector<int> a;
    vector<int> f;
    for(int i=0;i<n;i++){
        cin >> temp0 >> temp1;
        a.push_back(temp0);f.push_back(temp1);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<f[i];j++){
            if(first_wave){
                first_wave=0;
            }
            else{
                cout << endl;
            }
            for(int k=1;k<=a[i]*2-1;k++){
                int turn=(k>a[i]?a[i]-abs(a[i]-k):k);
                for(int h=1;h<=turn;h++){
                    cout << turn;
                }
                cout << endl;
            }
        }
        
    }
}