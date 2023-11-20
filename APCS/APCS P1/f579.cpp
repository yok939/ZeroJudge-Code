#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, n, total=0;
    bool true1=false, true2=false;
    vector<int> carts(100);
    for(int i=0;i<100;i++){
        carts[i]=0;
    }
    cin >> a >> b >> n;
    vector<vector<int>> customer_carts(n, carts);
    for(int i=0;i<n;i++){
        for(int j=INT_MIN;j!=0;j){
            cin >> j;
            if(j<0){
                customer_carts[i][abs(j)-1]-=1;
            }
            if(j>0){
                customer_carts[i][abs(j)-1]+=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        true1=false, true2=false;
        for(int j=0;j<100;j++){
            if(j+1==a&&customer_carts[i][j]>0){
                true1=true;
            }
            if(j+1==b&&customer_carts[i][j]>0){
                true2=true;
            }
        }
        if(true1==true&&true2==true){
            total++;
        }
    }
    cout << total;
}
