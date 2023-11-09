#include <iostream>
#include <string>
using namespace std;

int main()
{

    int troopamount;
    int i = 0;
    int a1, a2, a3, b1, b2, b3;
    bool success1 = false, success2 = false, success3 = false;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    while(success1 == false || success2 == false || success3 == false){
        i++;
        if(i % a1 == b1){
            success1 = true;

        }
        else{
            success1 = false;

        }
        if(i % a2 == b2){
            success2 = true;

        }
        else{
            success2 = false;

        }
        if(i % a3 == b3){
            success3 = true;

        }
        else{
            success3 = false;

        }



    }
    troopamount = i;
    cout << troopamount;


}

