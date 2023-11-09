#include <iostream>
#include <string>

using namespace std;

int Index(char In_char, char *list)
{
    int i;
    for(i = 0; i <= 25; i++){
        if(In_char == list[i]){
            return i;
        }

    }

    return -1;
}

int main()
{
    char Alphabet_[26] = {'A', 'B', 'C', 'D', 'E'
                        , 'F', 'G', 'H', 'I', 'J'
                        , 'K', 'L', 'M', 'N', 'O'
                        , 'P', 'Q', 'R', 'S', 'T'
                        , 'U', 'V', 'W', 'X', 'Y'
                        , 'Z'};
    int First_Digit_[26] = {1, 1, 1, 1, 1
                        , 1, 1, 1, 3, 1
                        , 1, 2, 2, 2, 3
                        , 2, 2, 2, 2, 2
                        , 2, 2, 3, 3, 3
                        , 3};
    int Second_Digit_[26] = {0, 1, 2, 3, 4
                        , 5, 6, 7, 4, 8
                        , 9, 0, 1, 2, 5
                        , 3, 4, 5, 6, 7
                        , 8, 9, 2, 0, 1
                        , 3};
    int foo1 = 0, foo2 = 0, IdentifyNum = 0;
    int Input_ID, times_amount=-1, total_times_amount=0, checking_sum=0, checking_=0, Final_Digit_=0;


    cin >> Input_ID;
    while(Input_ID){
        total_times_amount++;
        if(times_amount==9){
            times_amount=1;
        }else{
            times_amount++;
        }
        if(total_times_amount==1){
            Final_Digit_ = Input_ID % 10;
        }
        else{
            checking_+=(Input_ID % 10)*times_amount;
        }
        Input_ID/=10;
    }
    while(foo1<=25){
        checking_sum = checking_ + First_Digit_[foo1] * 1 + Second_Digit_[foo1] * 9;
        IdentifyNum = 10 - checking_sum % 10;
        if(IdentifyNum == 10){
            IdentifyNum = 0;
        }
        if(IdentifyNum == Final_Digit_){
            cout << Alphabet_[foo1];
        }
        foo1++;
    }


}


