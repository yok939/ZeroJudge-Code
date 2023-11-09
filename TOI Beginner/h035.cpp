#include <bits/stdc++.h>
using namespace std;

int main()
{
    int plates[9], plates_do[9], timer[9], n, score=0;
    for(int i=0;i<9;i++){
        plates[i]=1;
        plates_do[i]=0;
        timer[i]=1;
    }
    cin >> n;
    vector<int> x(n);
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<9;j++){
            if(plates[j]==0){
                if(timer[j]==12){
                    plates[j]=1, timer[j]=1;
                }
                else{
                    timer[j]++;
                }
            }
        }
        if(plates[x[i]-1]!=0&&x[i]!=-1){
            if(plates_do[x[i]-1]!=1)score+=x[i];
            plates[x[i]-1]=0;
            plates_do[x[i]-1]=1;
        }
        int checker=0;
        for(int j=0;j<9;j++){
            if(plates[j]==0){
                checker++;
            }
        }
        if(checker==9){
            cout << "perfect";
            return 0;
        }
    }
    cout << score;

    return 0;
}
