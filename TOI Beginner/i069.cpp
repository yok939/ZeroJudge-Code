#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i=0;
    cin >> n;
    vector<int> stone(n);
    int m0=0, m1=0, stone_MIN=INT_MAX, stone_MAX=INT_MIN, stone_average=0;
    for(int i=0;i<n;i++){
        cin >> stone[i];
        if(stone_MAX<stone[i]){
            stone_MAX=stone[i];m1=i;
        }
        if(stone_MIN>stone[i]){
            stone_MIN=stone[i];m0=i;
        }
        stone_average+=stone[i];
    }
    stone_average/=n;
    stone[m0]+=stone[m1]-stone_average;
    stone[m1]-=stone[m1]-stone_average;
    for(int i=0;i<n;i++)
        cout << stone[i] << ' ';
    return 0;
}