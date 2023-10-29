#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, best_case=INT_MAX, worst_case=INT_MIN;
    cin >> n;
    vector<int> s(n);
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    for(int i=0;i<=100;i++){
        for(int j=0;j<n;j++){
            if(s[j]==i){
                cout << s[j] << ' ';
            }
            if(s[j]>=60&&s[j]<best_case){
                best_case=s[j];
            }
            else if(s[j]<60&&s[j]>worst_case){
                worst_case=s[j];
            }
        }
    }
    cout << endl;
    if(worst_case==INT_MIN){
        cout << "best case";
    }
    else{
        cout << worst_case;
    }
    cout << endl;
    if(best_case==INT_MAX){
        cout << "worst case";
    }
    else{
        cout << best_case;
    }

    return 0;
}
