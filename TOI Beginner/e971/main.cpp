#include <iostream>

using namespace std;

int main()
{
    int m, n, temp1, map_[10000]={0};
    int temp_m=0, temp_n=0;
    int hit1_ = 0;
    cin >> m >> n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> map_[j+i*100];
        }
    }


    for(int i=0;i<m;i++){
        hit1_=0;
        temp_m=0;
        for(int j=0;j<n;j++){
            if(hit1_==0&&map_[j+i*100]==1){
                hit1_++;
                temp_m=j+i*100;
            }
            else if(hit1_==1&&map_[j+i*100]==1){
                hit1_++;
            }
            if(hit1_==2&&map_[j+i*100]==1){
                for(int k=temp_m+1;k<j+i*100;k++){
                    map_[k]=1;
                }
                hit1_=0;
                temp_m=0;
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << map_[j+i*100] << " ";
        }
        cout << endl;
    }

}
