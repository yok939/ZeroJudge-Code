#include <iostream>

using namespace std;

int main()
{
    int N=-1, p=0, c=0, temp1;
    int NUM_array1[1001]={0}, NUM_array2[1001]={0};
    bool NULL_=true;

    for(int i=0;i<2;i++){
        N=-1, p=0, c=0;
        while(N<1||N>1000){
            cin >> N;
        }
        if(i==0){
            for(int j=N;N>0;N--){
                cin >> p >> c;
                NUM_array1[p]=c;
            }
        }
        else{
            for(int j=N;N>0;N--){
                cin >> p >> c;
                NUM_array2[p]=c;
            }
        }


    }
    for(temp1=1000;temp1>=0;temp1--){
        if(NUM_array1[temp1]!=0&&NUM_array2[temp1]!=0){
            NUM_array1[temp1]=NUM_array1[temp1] + NUM_array2[temp1];
            NUM_array2[temp1]=0;
        }
        if(NUM_array1[temp1]!=0){
            NULL_=false;
            cout << temp1 << ":" << NUM_array1[temp1] << endl;
        }
        if(NUM_array2[temp1]!=0){
            NULL_=false;
            cout << temp1 << ":" << NUM_array2[temp1] << endl;
        }
    }
    if(NULL_){
        cout << "NULL!";
    }
}
