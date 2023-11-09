#include <iostream>

using namespace std;

int main()
{
    int N=-1, G, A, H, W;
    while(N<1||N>20){
        cin >> N;
    }
    for(int i=0;i<N;i++){
        cin >> G >> A >> H >> W;
        if(G==0){
             printf("%.2f", 9.6*W + 1.8*H - 4.7*A + 655.0);cout << endl;
        }
        else if(G==1){
            printf("%.2f", 13.7*W + 5.0*H - 6.8*A + 66.0);cout << endl;
        }
    }
}
