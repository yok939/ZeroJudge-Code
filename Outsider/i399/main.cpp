#include <bits/stdc++.h>

using namespace std;

int main()
{

    int num_amount[9], temp1=0, maximum=INT_MIN;
    for(int i=0;i<9;i++){
        num_amount[i]=0;
    }
    for(int i=0;i<3;i++){
        cin >> temp1;
        num_amount[temp1-1]++;
    }
    for(int i=9;i>0;i--){
        if(num_amount[i-1]>maximum) maximum=num_amount[i-1];
    }
    cout << maximum << ' ';
    for(int i=9;i>0;i--){
        if(num_amount[i-1]>0) cout << i << ' ';
    }
    return 0;
}
