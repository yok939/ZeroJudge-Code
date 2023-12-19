#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, x[206], y[205];
    long long total=0, total2=0, total3=0, total4=0;
    bool notmatch=0;
    cin >> n;
    for(int i=0;i<2*n+1;i++) cin >> x[i];
    for(int i=0;i<2*n+1;i++) total+=x[i];
    vector<int> x_model(total);
    for(int i=0;i<2*n+1;i++){
        for(int j=0;j<x[i];j++){
            x_model[total2]=(i%2==0?1:2);
            total2++;
        }
    }
    cin >> m;
    for(int i=0;i<2*m-1;i++) cin >> y[i];
    for(int i=0;i<2*m-1;i++) total3+=y[i];
    vector<int> y_model(total3);
    for(int i=0;i<2*m-1;i++){
        for(int j=0;j<y[i];j++){
            y_model[total4]=(i%2==0?2:1);
            total4++;
        }
    
    }
    for(int i=0;i<=total-total3;i++){
        notmatch=1;
        for(int j=0;j<total3;j++){
            if(y_model[j]+x_model[i+j]>3){
                notmatch=0;
                break;
            }
        }
        if(notmatch){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}