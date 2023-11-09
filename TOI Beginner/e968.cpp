#include <iostream>

using namespace std;

int main()
{
    int N=-1, allstu_[20]={0}, temp1;
    while(N<3||N>20){
        cin >> N;
    }
    for(int i=0;i<3;i++){
        cin >> temp1;
        allstu_[temp1-1]=1;
    }
    for(int j=N;j>0;j--){
        if(allstu_[j-1]==0){
            cout << "No. " << j << endl;
        }
    }
    return 0;

}
