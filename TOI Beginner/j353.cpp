#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y, y_all[105], total=0;
    for(int i=0;i<105;i++) y_all[i]=0;
    while(cin >> x >> y&&x!=-1&&y!=-1){
        if(x==1){total++;y_all[y]++;}
        else if(x==0){total-=y_all[y];y_all[y]=0;}
    }
    cout << total;
    return 0;
}