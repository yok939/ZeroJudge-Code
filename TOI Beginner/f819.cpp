#include <iostream>

using namespace std;

int main()
{
    long long N, S, D, total=0, anot_a=0, anot[2000];
    for(int i=0;i<2000;i++){
        anot[i]=0;
    }
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> S >> D;
        if(D>100){
            anot[S-1]=S;
            total+=(D-100)*5;
            anot_a++;
        }
    }
    if(anot_a==0){
        cout << 0;
    }
    else{
        for(int i=0;i<2000;i++){
            if(anot[i]!=0){
                cout << anot[i] << " ";
            }
        }
        cout << endl << total;
    }

}
