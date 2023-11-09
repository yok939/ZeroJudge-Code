#include <iostream>

using namespace std;

int main()
{
    int N, P1=0, P2=0;
    cin >> N;
    P1=P2=N;
    for(int i=0;i<N/2000;i++){
        P1-=200;
    }
    for(int i=0;i<N/1000;i++){
        P2-=100;
    }
    if(P1<=P2){
        printf("%d %d", P1, 0);
    }
    else{
        printf("%d %d", P2, 1);
    }
}
