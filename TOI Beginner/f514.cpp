#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string T, S;
    bool out_1=false;
    int S_left[100];
    int T_ID[30];
    for(int i=0;i<100;i++){
        S_left[i]= 1;
    }
    for(int i=0;i<30;i++){
        T_ID[i]= -1;
    }


    cin >> S >> T;
    for(int i=0;i<T.size();i++){
        for(int j=0;j<S.size();j++){
            if(S[j]==T[i]&&S_left[j]==1){
                T_ID[i]=j+1;
                S_left[j]=0;
                break;
            }
        }
    }


    for(int i=0;i<T.size();i++){
        if(T_ID[i]== -1){
            cout << "X" << " ";
        }
        else{
            if(out_1==true&&T_ID[i]==1){
                cout << "X" << " ";
            }
            else{
                cout << T_ID[i] << " ";
                if(T_ID[i]==1){
                    out_1=true;
                }
            }
        }

    }

}
