#include <iostream>
#include <cmath>


using namespace std;


#define SWAP(x,y,t) (x=t,x=y,y=t)

int main()
{
    long long R, C, N, seat[10000]={0};
    long long temp1=0;
    cin >> R >> C >> N;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            seat[j+i*100]=i*C+j+1;
        }
    }


    for(int k=0;k<N-1;k++){
        if(k%2==0){
            for(int t1=0;t1<R;t1++){
                for(int t2=C-1;t2>0;t2--){
                    temp1 = seat[t2+100*t1];
                    SWAP(seat[t2+100*t1], seat[abs(1-t2)+100*t1], temp1);
                }
            }
        }
        else if(k%2==1){
            for(int t3=0;t3<C;t3++){
                for(int t4=R-1;t4>0;t4--){
                    temp1 = seat[t3+100*t4];
                    SWAP(seat[t3+100*t4], seat[t3+100*abs(1-t4)], temp1);
                }
            }
        }
    }

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout << seat[j+i*100] << " ";
        }
        cout << endl;
    }

}
