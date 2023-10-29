#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d, total_buy=0, total_cash=0;
    cin >> n >> d;
    vector<int> x(3);
    vector<vector<int>> y(n, x);
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin >> y[i][j];
        }
    }


    for(int i=0;i<n;i++){
        int average = (y[i][0]+y[i][1]+y[i][2])/3;
        int maximum = INT_MIN;
        int minimum = INT_MAX;
        for(int j=0;j<3;j++){
            maximum = max(maximum, y[i][j]);
            minimum = min(minimum, y[i][j]);
        }
        if(maximum-minimum>=d){
            total_buy++;
            total_cash+=average;
        }
    }
    printf("%d %d", total_buy, total_cash);
    return 0;
}
