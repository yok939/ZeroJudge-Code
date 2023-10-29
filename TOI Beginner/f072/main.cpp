#include <iostream>

using namespace std;

int main()
{
    int N, Block_Lay1[25]={0}, Block_Lay2[25]={0}, Plants=0, f1, f2;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> Block_Lay1[i];
    }
    for(int i=0;i<N;i++){
        if(Block_Lay1[i]==1&&f1!=-1){
            f2=i;
            for(int j=f1+1;j<f2;j++){
                Block_Lay2[j]=5;
            }
            f2=-1;
            f1=-1;
        }
        if(Block_Lay1[i]==1&&f2==-1){
            f1=i;
        }
    }

    for(int i=0;i<N;i++){
        if(Block_Lay2[i]==5){
            if(Block_Lay1[i+1]!=9&&Block_Lay1[i-1]!=9&&Block_Lay1[i]!=9){
                Plants++;
            }
        }
    }
    cout << Plants;

    return 0;
}
