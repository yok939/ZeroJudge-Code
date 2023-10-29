#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    string INPUT_LINE, FIRST_HALF="", SECOND_HALF="";
    int INPUT_CASES=0, MIDDLE_CHAR=0, Length_of_part=0, i=0;
    cin >> INPUT_LINE;

    if(INPUT_LINE.length() % 2 == 1){
        INPUT_CASES = 1;
        MIDDLE_CHAR = INPUT_LINE.length() / 2;
        Length_of_part = INPUT_LINE.length() / 2;
    }
    else{
        INPUT_CASES = 2;
        MIDDLE_CHAR = INPUT_LINE.length() / 2.0 + 0.5;
        Length_of_part = INPUT_LINE.length() / 2.0;
    }

    while(i<MIDDLE_CHAR){
        FIRST_HALF = FIRST_HALF + INPUT_LINE[i];
        i++;
    }
    if(INPUT_CASES==1){
        i++;
    }
    while(i<INPUT_LINE.length()){
        SECOND_HALF = INPUT_LINE[i] + SECOND_HALF;
        i++;
    }
    if(FIRST_HALF==SECOND_HALF){
        cout << "yes";
    }else{
        cout << "no";
    }

    return 0;

}
