#include <bits/stdc++.h>

using namespace std;

int main()
{
    int f, n, k=1;
    cin >> f >> n;
    vector<int> y(n);
    for(int i=0;i<n;i++){
        cin >> y[i];
    }
    while(k<=n+1){
        cout << f << ' ';
        if(f==0){
            if(y[k-1]==5){
                printf(": Lost at round %d", k);
                break;
            }
            else if(y[k-1]==2){
                printf(": Won at round %d", k);
                break;
            }
        }
        if(f==2){
            if(y[k-1]==0){
                printf(": Lost at round %d", k);
                break;
            }
            else if(y[k-1]==5){
                printf(": Won at round %d", k);
                break;
            }
        }
        if(f==5){
            if(y[k-1]==2){
                printf(": Lost at round %d", k);
                break;
            }
            else if(y[k-1]==0){
                printf(": Won at round %d", k);
                break;
            }
        }
        if(k==n){
            printf(": Drew at round %d", k);
            break;
        }
        if(y[k-1]==y[k-2]&&k>=2){
            if(y[k-1]==0){
                f=5;
            }
            else if(y[k-1]==2){
                f=0;
            }
            else if(y[k-1]==5){
                f=2;
            }
        }
        else if(k>=2){
            f=y[k-1];
        }

        k++;
    }

}
