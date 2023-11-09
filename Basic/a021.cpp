#include <iostream>
#include <string>
#include <cmath>
#include <array>

using namespace std;

int comparing_part_size(int INPUT_1, int INPUT_2)
{
    if(INPUT_1 > INPUT_2){
        return INPUT_1;
    }
    else if(INPUT_1 < INPUT_2){
        return INPUT_2;
    }
    else{
        return INPUT_1;
    }
}

bool IsTwoBigger(int *PART_IN_1, int *PART_IN_2, int MAX_PART_AMOUNT)
{
    int foo1 = 0, SamePart = 0, NowPart = 1;
    while(true){
        if(PART_IN_1[124 - foo1] == PART_IN_2[124 - foo1]){
            SamePart++;
        }
        if(SamePart == MAX_PART_AMOUNT){
            return false;
        }
        if(PART_IN_1[124 - foo1] > PART_IN_2[124 - foo1]){
            if(PART_IN_2[123 - foo1] == 0 && PART_IN_1[123 - foo1] != 0 && NowPart == MAX_PART_AMOUNT - 1){
                return false;

            }
            else if(PART_IN_1[123 - foo1] == 0 && PART_IN_2[123 - foo1] == 0 && NowPart == MAX_PART_AMOUNT){
                return false;
            }

        }
        else if(PART_IN_1[124 - foo1] < PART_IN_2[124 - foo1]){
            if(PART_IN_1[123 - foo1] == 0 && PART_IN_2[123 - foo1] != 0 && NowPart == MAX_PART_AMOUNT - 1){
                return true;
            }
            else if(PART_IN_1[123 - foo1] == 0 && PART_IN_2[123 - foo1] == 0 && NowPart == MAX_PART_AMOUNT){
                return true;
            }
        }
        foo1++;
        NowPart++;
    }


}


void Cutter(string Input, int *PART_IN)
{
    int foo1 = 0;
    while(Input.length() % 4 != 0){
        Input = "0" + Input;

    }
    for(foo1 = 0; foo1 < Input.length() / 4; foo1++){
        PART_IN[125 + foo1 - Input.length() / 4] = stoi(Input.substr(4 * foo1, 4));

    }
    cout << Input << endl;


}

void Math_ADD(int *PART_IN_1, int *PART_IN_2, string *PART_OUT, int REPEAT_)
{
    int foo1 = 0, foo2 = 0, pre1 = 0;
    int temp1 = 0, temp2 = 0, repeat_ = REPEAT_;
    bool firstloop = false;
    string tempstring;

    while(foo1 < repeat_){
        temp1 = PART_IN_1[124 - foo1] + PART_IN_2[124 - foo1] + temp2;
        if(temp1 / 10000.0 >= 1){
            temp1 -= 10000; temp2 = 1;
            if(foo1 + 1 == repeat_){
                repeat_++;
            }
        }
        else{
            temp2 = 0;
        }
        PART_OUT[124 - foo1] = to_string(temp1);
        foo1++;
    }
    foo1 -= 1;
    while(foo1 >= 0){
        if(firstloop == true){
            if(PART_OUT[124 - foo1].length() < 4){
                pre1 = 4 - PART_OUT[124 - foo1].length();
                for(foo2 = 0; foo2 < pre1; foo2++){
                    PART_OUT[124 - foo1] = "0" + PART_OUT[124 - foo1];
                }

            }
        }
        cout << PART_OUT[124 - foo1];
        foo1--;
        firstloop = true;
    }



}

void Math_MIN(int *PART_IN_1, int *PART_IN_2, string *PART_OUT, int REPEAT_, bool NEGATIVE_)
{
    int foo1 = 0, foo2 = 0, pre1 = 0, pre2 = 0;
    int temp1 = 0, temp2 = 0, repeat_ = REPEAT_, ZEROC_ = 0;
    bool firstloop = false;
    string tempstring;

    while(foo1 < repeat_){
        temp1 = PART_IN_1[124 - foo1] - PART_IN_2[124 - foo1] + temp2;
        if(temp1 / 10000.0 < 0){
            temp1 += 10000; temp2 = -1;
            if(foo1 + 1 == repeat_){
                repeat_--;
            }
        }
        else{
            temp2 = 0;
        }
        PART_OUT[124 - foo1] = to_string(temp1);
        foo1++;
    }
    foo1 -= 1;
    pre2 = foo1;
    if(NEGATIVE_){
        cout << "-";
    }
    while(foo1 >= 0){
        if(firstloop == true){
            if(PART_OUT[124 - foo1].length() < 4){
                pre1 = 4 - PART_OUT[124 - foo1].length();
                for(foo2 = 0; foo2 < pre1; foo2++){
                    PART_OUT[124 - foo1] = "0" + PART_OUT[124 - foo1];

                }

            }
        }
        if(PART_OUT[124 - foo1] == "0000" || PART_OUT[124 - foo1] == "000" || PART_OUT[124 - foo1] == "00" || PART_OUT[124 - foo1] == "0"){
            ZEROC_++;
        }
        foo1--;
        firstloop = true;
    }
    if(ZEROC_ - 1 == pre2){
        cout << "0";
    }
    else{
        while(pre2 >= 0){
            cout << PART_OUT[124 - pre2];
            pre2--;
        }
    }

}

/*void Math_MUL(int *PART_IN_1, int *PART_IN_2, string *PART_OUT, int REPEAT_)
{
    int foo1 = 0, foo2 = 0, pre1 = 0;
    int temp1 = 0, temp2 = 0, temp3 = 0, repeat_ = REPEAT_;
    bool firstloop = false;
    string tempstring;

    while(foo1 < repeat_){
        temp1 = PART_IN_1[124 - foo1] * PART_IN_2[124 - foo1] + temp2;
        if(temp1 / 10000.0 >= 1){
            temp1 -= 10000; temp2 = 1;
            if(foo1 + 1 == repeat_){
                repeat_++;
            }
        }
        else{
            temp2 = 0;
        }
        PART_OUT[124 - foo1] = to_string(temp1);
        foo1++;
    }
    foo1 -= 1;
    while(foo1 >= 0){
        if(firstloop == true){
            if(PART_OUT[124 - foo1].length() < 4){
                pre1 = 4 - PART_OUT[124 - foo1].length();
                for(foo2 = 0; foo2 < pre1; foo2++){
                    PART_OUT[124 - foo1] = "0" + PART_OUT[124 - foo1];
                }

            }
        }
        cout << PART_OUT[124 - foo1];
        foo1--;
        firstloop = true;
    }



}
*/



int main()
{

    string Num1_Input, Num2_Input;
    int Num1_InputPART[125] = {0};
    int Num2_InputPART[125] = {0};
    string OutputPART[125] = {"0000"};
    char Func_;


    cin >> Num1_Input >> Func_ >> Num2_Input;
    Cutter(Num1_Input, Num1_InputPART);
    Cutter(Num2_Input, Num2_InputPART);


    if(Func_ == '+'){
        Math_ADD(Num1_InputPART, Num2_InputPART, OutputPART, comparing_part_size(ceil(Num1_Input.length() / 4.0), ceil(Num2_Input.length() / 4.0)));

    }
    else if(Func_ == '-'){
        if(IsTwoBigger(Num1_InputPART, Num2_InputPART, comparing_part_size(ceil(Num1_Input.length() / 4.0), ceil(Num2_Input.length() / 4.0)))){
            Math_MIN(Num2_InputPART, Num1_InputPART, OutputPART, comparing_part_size(ceil(Num1_Input.length() / 4.0), ceil(Num2_Input.length() / 4.0)), true);
        }
        else{
            Math_MIN(Num1_InputPART, Num2_InputPART, OutputPART, comparing_part_size(ceil(Num1_Input.length() / 4.0), ceil(Num2_Input.length() / 4.0)), false);
        }


    }


    return 0;

}

//get 1,000,000,000,000 into "00100" "00000" "00000", 5 num per addup
