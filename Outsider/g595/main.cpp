#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, total_add=0;
    cin >> n;
    vector<int> h(n);
    for(int i=0;i<n;i++){
        cin >> h[i];
    }
    for(int i=0;i<n;i++){
        if(h[i]==0){
            if(i==0){
                h[i]=h[i+1];
                total_add+=h[i];
            }
            else if(i==n-1){
                h[i]=h[i-1];
                total_add+=h[i];
            }
            else{
                h[i]= (h[i-1]>=h[i+1])?h[i+1]:h[i-1];
                total_add+=h[i];
            }
        }

    }
    cout << total_add;
}
