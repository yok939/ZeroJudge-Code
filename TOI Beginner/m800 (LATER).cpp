#include <bits/stdc++.h>

using namespace std;

int office[1002][1002], office_temp[1002][1002], office_add[1002][1002];
int main(){
    int h, w, k, total=0;
    int h_add[4]={1, -1, 0, 0}, w_add[4]={0, 0, 1, -1};
    cin >> h >> w >> k;

    for(int i=0;i<1002;i++){
        for(int j=0;j<1002;j++){
            office_add[i][j]=0;
        }
    }
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cin >> office_temp[i][j];
            office[i][j]=office_temp[i][j];
        }
    }

    while(k--){
        for(int i=1;i<=h;i++){
            for(int j=1;j<=w;j++){
                int above_=0, below_=0, counted_=0;
                for(int p=0;p<4;p++){
                    if(i+h_add[p]>0&&j+w_add[p]>0&&i+h_add[p]<=h&&j+w_add[p]<=w){
                        counted_++;
                        if(office[i+h_add[p]][j+w_add[p]]>office[i][j]){
                            above_++;
                        }
                        else if(office[i+h_add[p]][j+w_add[p]]<office[i][j]){
                            below_++;

                        }
                    }
                }
                if(above_>below_&&above_>counted_/2.0){
                    office_add[i][j]=1;
                }
                else if(above_<below_&&below_>counted_/2.0){
                    office_add[i][j]=-1;
                }
            }
        }
        for(int i=1;i<=h;i++){
            for(int j=1;j<=w;j++){
                office[i][j]+=office_add[i][j];
                office_add[i][j]=0;
            }
        }
    }
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            total-=office_temp[i][j]-office[i][j];
        }
    }
    cout << total;
    return 0;


}
