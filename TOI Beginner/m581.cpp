#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    bool wolfwin=false, errorwin=false, townwin=false;
    cin >> n;
    vector<int> player(n);
    for(int i=0;i<n;i++){
        cin >> player[i];
    }
    while(cin >> x){
        if(x!=0){
            if(player[x-1]==-2){
                player[x-1]=3;
            }
            else if(player[x-1]!=3){
                player[x-1]=-2;
            }
        }
        else{
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(player[i]==-1){
            wolfwin=true;
        }
        if(player[i]==3){
            errorwin=true;
        }
    }
    if(errorwin==true){
        cout << "Wrong";
    }
    else if(wolfwin==true){
        cout << "Werewolves";
    }
    else{
        cout << "Townsfolk";
    }
    return 0;


}
