#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int input_, i=1, result_=1;
    while(cin >> input_){
        i=1, result_=1;
        while(i<=input_){
            if(i==1){
                result_ += 1;
            }
            else{
                result_ += 2 * (i - 1);
            }
            i++;

        }
        cout << result_ << endl;
    }

}

//0 1
//1 2
//2 4
//3 8
//4 14
