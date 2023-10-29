#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int n){
    if(n <= 1){
        return false;

    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;

        }

    }
    return true;

}


int main()
{
    int input = 0;
    int j = 2;
    int input_temp = 0;
    int times_temp = 0;
    bool Last_Number = false;
    while(input <= 1 || input > 100000000){
        cin >> input;
    }
    input_temp = input;

    if(IsPrime(input)){
        cout << input;

    }
    else{
        while(j < input - 1){
            times_temp = 0;
            Last_Number = false;

            if(IsPrime(j)){
                while(input_temp % j == 0){
                    if(input_temp / j == 1){
                        Last_Number = true;
                    }
                    times_temp++;
                    input_temp = input_temp / j;

                }
                if(times_temp == 1){
                    cout << j;
                    if(!Last_Number == true){
                        cout << " * ";
                    }
                    else{
                        break;
                    }

                }
                else if(times_temp >= 2){
                    cout << j << "^" << times_temp;
                    if(!Last_Number == true){
                        cout << " * ";
                    }
                    else{
                        break;
                    }
                }
            }
            j++;


        }

    }

    return 0;

}
