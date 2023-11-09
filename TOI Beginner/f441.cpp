#include <iostream>

using namespace std;

int main()
{
    long long N, S, official_Ans[20], own_Ans[100][20], M, TotalCorrect=0;
    cin >> N >> S;
    for(int i=0;i<N;i++){
        cin >> official_Ans[i];
    }
    cin >> M;
    for(int j=0;j<M;j++){
        for(int i=0;i<N;i++){
            cin >> own_Ans[j][i];
        }
    }
    for(int j=0;j<M;j++){
        TotalCorrect=0;
        for(int i=0;i<N;i++){
            if(own_Ans[j][i]==official_Ans[i]){
                TotalCorrect++;
            }
        }
        printf("%d\n", S*TotalCorrect);
    }

}
