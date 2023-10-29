#include <iostream>

using namespace std;

int main()
{
    long long N, N_sales[30], N_ID[30], temp_big=-1111, temp_big_ID=0, temp_small=-1111, temp_small_ID=0
             ,temp_sales=0, temp_ID=0, tar1=(-1111), tar2=(-1111);
    cin >> N;
    for(int i=0;i<N;i++) cin >> N_sales[i];
    for(int i=0;i<N;i++) cin >> N_ID[i];
    for(int i=0;i<N;i++){
        if(N_ID[i]==-1&&tar1!=(-1111)){
            tar2=i;
            temp_big=(-1111);
            for(int j=tar1+1;j<tar2;j++){
                if(N_sales[j]>temp_big){
                    temp_big=N_sales[j];
                    temp_big_ID=j;
                }
            }
            temp_small=temp_big;
            for(int j=tar1+1;j<tar2;j++){
                if(N_sales[j]<temp_small){
                    temp_small=N_sales[j];
                    temp_small_ID=j;
                }
            }
            if(temp_big!=temp_small){
              temp_ID=N_ID[temp_big_ID];
                temp_sales=N_sales[temp_big_ID];
                N_ID[temp_big_ID]=N_ID[temp_small_ID];
                N_sales[temp_big_ID]=N_sales[temp_small_ID];
                N_ID[temp_small_ID]=temp_ID;
                N_sales[temp_small_ID]=temp_sales;
            }
            tar2=(-1111);
            tar1=i;
        }
        if(N_ID[i]==-1&&tar2==(-1111)){
            tar1=i;
        }
    }
    for(int i=0;i<N;i++) cout << N_ID[i] << " ";
    return 0;
}
