#include <iostream>

using namespace std;

int main()
{
    long long S, E, A, Time=1, pregrow=0;
    bool Magico=false, Rest=false;
    cin >> S >> E >> A;
    while(S<E){
        S+=pregrow;pregrow=0;
        Time++;
        if(Time>=2&&Time%10==1){
            if(S<E){
                A--;
                if(A<=0){
                    cout << "unsalable";
                    return 0;
                }
            }
        }
        if(Rest==true){
            Magico=false;
        }
        if(Rest==false){
            if(Magico==true){
                pregrow=S/3;
                Magico=false;
            }
            else{
                pregrow=S/10;
                if(Time%3==0){
                    Magico=true;
                }
            }

        }
        if(Time%10==9||Time%10==0){
            Rest=true;
        }
        else{
            Rest=false;
        }

    }
if(Time>=3){
        printf("%d", Time-1);
    }
    else{
        printf("%d", Time);
    }

}
