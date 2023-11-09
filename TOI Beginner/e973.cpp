#include <iostream>

using namespace std;

int main()
{
    int big1=0, big2=0;
    long long N;
    int surveyNUM[10]={0};



    cin >> N;
    while(N){
        surveyNUM[N%10]++;
        N/=10;
    }
    for(int i=0;i<10;i++){
        big1=0, big2=0;
        for(int j=0;j<10;j++){
            if(surveyNUM[j]>big1){
                big2=j;
                big1=surveyNUM[j];
            }
        }
        if(big1!=0){
            cout << big2 << " ";
            surveyNUM[big2]=0;
        }
        else{
            break;
        }
    }



    /*for(int i=0;i<10;i++){
        cout << surveyNUM[i] << " ";
    }
    */
}
