#include <iostream>

using namespace std;

int main()
{
    int N, ri, B, temp1, Comments[10000], sum=0;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> ri;
        Comments[i]=ri;
        temp1=i;

    }
    B=Comments[temp1];
    for(int j=0;j<N;j++){
        if((j+1)%B==1){
            sum+=Comments[j];
        }

    }
    if(sum%N==0){
        cout << temp1+1 << " " << Comments[temp1];
    }
    else{
        cout << (sum%N) << " " << Comments[sum%N-1];
    }

}
