#include <iostream>

using namespace std;

int main()
{
    long long N, C[10000], E, E_temp=0, Q, Q_list[200];
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> C[i];
    }
    cin >> E >> Q;
    for(int i=0;i<Q;i++){
        cin >> Q_list[i];
    }
    for(int j=0;j<Q;j++){
        for(int i=0;i<N;i++){
            if(Q_list[j]==C[i]){
                C[i]=E;
                E=Q_list[j];
                break;
            }
        }
    }
    for(int i=0;i<N;i++){
        cout << C[i] << " ";
    }
}
