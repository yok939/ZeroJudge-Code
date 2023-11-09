#include <iostream>

using namespace std;

int main()
{
    int N, P, t, mxt=0, mxi;
    cin>>N>>P;
    for(int i=1;P;i++){
        t=0;
        for(int j=0;j<N;j++){
            t+=P%10;
            P/=10;
        }
        if(t>=mxt){
            mxt=t,mxi=i;
        }
    }
    cout << mxi << " " << mxt << endl;
}
