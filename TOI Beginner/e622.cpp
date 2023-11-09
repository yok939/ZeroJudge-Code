#include <iostream>

using namespace std;

int main()
{
    int n, m=1, S, Input_CP, Input_IV, AFTER_S, HIGH_CP=0, HIGH_Num=0;
    cin >> n >> S;
    while(m<=n){
        cin >> Input_CP >> Input_IV;
        AFTER_S = S;
        while(AFTER_S>=0){
            if(AFTER_S-1000>=0){
                AFTER_S-=1000;
            }
            else{
                break;
            }
            if(Input_IV>=0&&Input_IV<=29){
                Input_CP+=10;
            }
            else if(Input_IV>=30&&Input_IV<=39){
                Input_CP+=50;
            }
            else if(Input_IV>=40&&Input_IV<=45){
                Input_CP+=100;
            }

        }
        if(Input_CP>HIGH_CP){
            HIGH_Num = m;
            HIGH_CP = Input_CP;
        }

        m++;
    }
    cout << HIGH_Num << " " << HIGH_CP;
}
