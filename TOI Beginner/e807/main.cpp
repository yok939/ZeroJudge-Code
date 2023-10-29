#include <iostream>

using namespace std;

int main()
{

    float M, A, N, E;
    float EveryRain_TIME[4]={0};
    float HighestRain_Result=0, EveryRain_TIME_Result=0;
    char HighestRain_TIME[7]={'M'};
    int HighestRain_DAY_Result;
    string F_HighestRain_TIME_Result;



    for(int i=0;i<7;i++){
        cin >> M >> A >> N >> E;
        EveryRain_TIME[0]+=M;
        EveryRain_TIME[1]+=A;
        EveryRain_TIME[2]+=N;
        EveryRain_TIME[3]+=E;
        if((M+A+N+E)>HighestRain_Result){
            HighestRain_DAY_Result=i;
            HighestRain_Result= (M+A+N+E);
        }
    }
    for(int j=0;j<4;j++){
        if(EveryRain_TIME[j]>EveryRain_TIME_Result){
            EveryRain_TIME_Result=EveryRain_TIME[j];
            if(j==0){
                F_HighestRain_TIME_Result="morning";
            }
            else if(j==1){
                F_HighestRain_TIME_Result="afternoon";
            }
            else if(j==2){
                F_HighestRain_TIME_Result="night";
            }
            else if(j==3){
                F_HighestRain_TIME_Result="early morning";
            }
        }
    }

    cout << HighestRain_DAY_Result + 1 << endl << F_HighestRain_TIME_Result;


}
