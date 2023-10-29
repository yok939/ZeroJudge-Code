#include <iostream>

using namespace std;

int main()
{
    int R=-1, A=-1, out1, out2;
    while(R<3||R>=2147483648){
        cin >> R;
    }
    A=R+1;
    while(R<A){
        cin >> A;
    }


    if(R==A){
        A-=3;
    }
    out1=R-A;
    if(out1>A){
        cout << A << "+" << out1 << "=" << R;
    }
    else if(out1<A){
        cout << out1 << "+" << A << "=" << R;
    }
    else if(out1==A){
        cout << out1 << "+" << A << "=" << R;
    }

}
