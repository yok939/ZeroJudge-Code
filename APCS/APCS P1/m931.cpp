#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, first_high=INT_MIN, second_high=INT_MIN, second_index=-1;
    cin >> n;
    vector<int> attack(n);
    vector<int> defense(n);
    vector<int> total(n);
    for(int i=0;i<n;i++){
        cin >> attack[i] >> defense[i];
        total[i]=pow(attack[i], 2)+pow(defense[i], 2);
    }
    for(int i=0;i<n;i++){
        if(total[i]>first_high){
            first_high=total[i];
        }
    }
    for(int i=0;i<n;i++){
        if(total[i]>second_high&&total[i]<first_high){
            second_high=total[i];
            second_index=i;
        }
    }
    printf("%d %d", attack[second_index], defense[second_index]);
}