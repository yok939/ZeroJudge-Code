#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> x(n);
    vector<int> y(n);
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            y[j]=x[j];
        }
        for(int j=0;j<n;j+=2){
            x[j]=y[j/2];
        }
        for(int j=1;j<n;j+=2){
            x[j]=y[j/2+n/2];
        }
    }
    for(int i=0;i<n;i++){
        cout << x[i] << ' ';
    }
}
