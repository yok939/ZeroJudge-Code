#include <iostream>

using namespace std;

int main()
{
    long int N,H1,M1,H2,M2,M3;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> H1 >> M1 >> H2 >> M2 >> M3;
        if(H1*60+M1+M3<=H2*60+M2){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}

