#include <iostream>
#include <string>

using namespace std;

// 1 + 1 * 2

int ProcessAmount(string InputLine)
{
    int i = 0, counter = 0;

    while(i <= InputLine.length() - 1){
        if(InputLine[i] == '*'|| InputLine[i] == '/'|| InputLine[i] == '%'|| InputLine[i] == '-'|| InputLine[i] == '+'){
            counter++;
        }

        i++;
    }
    return counter;
}

string GetMathLine(string InputLine)
{
    int i = 0, j = 0, k = 0, targetoper, temp1 = 0, temp2 = 0;
    int head_index = 0, tail_index = InputLine.length() - 1;
    int math_situation = 0, counter = 0;
    bool have_brackets = false, findhead = false, findtail = false;

    while(i <= InputLine.length()){
        if(InputLine[i] == '('){
            head_index = i;
            counter = 0;
        }
        if(InputLine[i] == '+'|| InputLine[i] == '-' || InputLine[i] == '*'|| InputLine[i] == '/'|| InputLine[i] == '%'){
            counter++;
        }
        if(InputLine[i] == ')'){
            tail_index = i;
            have_brackets = true;
            break;
        }
        i++;
    }

    if(have_brackets){
        j = head_index;
    }

    while(j <= tail_index){
        if(InputLine[j] == '*'|| InputLine[j] == '/'|| InputLine[j] == '%'){
            targetoper = j;
            math_situation = 2;
            break;

        }
        j++;
    }
    if(math_situation == 0){
        while(k <= tail_index){
            if(InputLine[k] == '+'|| InputLine[k] == '-'){
                targetoper = k;
                math_situation = 1;
                break;

            }
            k++;
        }

    }

    temp1 = targetoper - 2;
    temp2 = targetoper + 2;
    if(have_brackets == true && counter > 1){
        while(findhead == false || findtail == false){
            if(InputLine[temp1] != ' ' && temp1 != 0){
                temp1--;
            }
            else{
                head_index = temp1;
                findhead = true;

            }
            if(InputLine[temp2] != ' '&& temp2 != InputLine.length() - 1){
                temp2++;
            }
            else{
                tail_index = temp2;
                findtail = true;

            }

        }
    }
    if(have_brackets == false){
        while(findhead == false || findtail == false){
            if(InputLine[temp1] != ' ' && temp1 != 0){
                temp1--;
            }
            else{
                head_index = temp1;
                findhead = true;

            }
            if(InputLine[temp2] != ' '&& temp2 != InputLine.length() - 1){
                temp2++;
            }
            else{
                tail_index = temp2;
                findtail = true;

            }

        }
    }

    if(head_index != 0 && have_brackets == false){
        return InputLine.substr(head_index + 1, tail_index - head_index + 1);
    }
    else if(have_brackets == true && counter > 1){
        return InputLine.substr(head_index + 1, tail_index - head_index - 1);
    }
    else{
        return InputLine.substr(head_index, tail_index - head_index + 1);
    }


}

string SwitchMathLine(string InputLine, string LineForSwitch)
{
    int i = 0, j = 0, k = 0, targetoper, temp1 = 0, temp2 = 0;
    int head_index = 0, tail_index = InputLine.length() - 1;
    int math_situation = 0, counter = 0;
    bool have_brackets = false, findhead = false, findtail = false;

    while(i <= InputLine.length()){
        if(InputLine[i] == '('){
            head_index = i;
            counter = 0;
        }
        if(InputLine[i] == '+'|| InputLine[i] == '-' || InputLine[i] == '*'|| InputLine[i] == '/'|| InputLine[i] == '%'){
            counter++;
        }
        if(InputLine[i] == ')'){
            tail_index = i;
            have_brackets = true;
            break;
        }
        i++;
    }

    if(have_brackets){
        j = head_index;
    }

    while(j <= tail_index){
        if(InputLine[j] == '*'|| InputLine[j] == '/'|| InputLine[j] == '%'){
            targetoper = j;
            math_situation = 2;
            break;

        }
        j++;
    }
    if(math_situation == 0){
        while(k <= tail_index){
            if(InputLine[k] == '+'|| InputLine[k] == '-'){
                targetoper = k;
                math_situation = 1;
                break;

            }
            k++;
        }

    }

    temp1 = targetoper - 2;
    temp2 = targetoper + 2;
    if(have_brackets == true && counter > 1){
        while(findhead == false || findtail == false){
            if(InputLine[temp1] != ' ' && temp1 != 0){
                temp1--;
            }
            else{
                head_index = temp1;
                findhead = true;

            }
            if(InputLine[temp2] != ' '&& temp2 != InputLine.length() - 1){
                temp2++;
            }
            else{
                tail_index = temp2;
                findtail = true;

            }

        }
    }
    if(have_brackets == false){
        while(findhead == false || findtail == false){
            if(InputLine[temp1] != ' ' && temp1 != 0){
                temp1--;
            }
            else{
                head_index = temp1;
                findhead = true;

            }
            if(InputLine[temp2] != ' '&& temp2 != InputLine.length() - 1){
                temp2++;
            }
            else{
                tail_index = temp2;
                findtail = true;

            }

        }
    }

    if(head_index != 0 && have_brackets == false){
        return InputLine.replace(head_index + 1, tail_index - head_index + 1, LineForSwitch);
    }
    else if(have_brackets == true && counter > 1){
        return InputLine.replace(head_index + 1, tail_index - head_index - 1, LineForSwitch);
    }
    else{
        return InputLine.replace(head_index, tail_index - head_index + 1, LineForSwitch);

    }




}


int MathFunc(string InputLine)
{
    int j = 0, k = 0, total_length = 0;
    int head_index, tail_index, num1, num2, oper;
    bool num1_get = false, num2_get = false, oper_get = false;
    string num1_str, num2_str;


    head_index = 0;
    tail_index = InputLine.length();
    total_length = tail_index - head_index;
    if(InputLine[j] == '('){
        j+=2;
        total_length-=2;
       }
    while(j <= total_length){
        if(num1_get == false && oper_get == false && num2_get == false){
            num1_str += InputLine[j];
            if(InputLine[j] == ' '){
                num1_get = true;
                j++;
            }
        }
        if(num1_get == true && oper_get == false && num2_get == false){
            if(InputLine[j] == '+'){
                oper = 1;
            }
            else if(InputLine[j] == '-'){
                oper = 2;
            }
            else if(InputLine[j] == '*'){
                oper = 3;
            }
            else if(InputLine[j] == '/'){
                oper = 4;
            }
            else if(InputLine[j] == '%'){
                oper = 5;
            }
            if(InputLine[j] == ' '){
                oper_get = true;
                j++;
            }
        }
        if(num1_get == true && oper_get == true && num2_get == false){
            num2_str += InputLine[j];
            if(InputLine[j] == ' '){
                num2_get = true;
                j++;
            }
        }
        j++;

    }
    num1 = atoi(num1_str.c_str());
    num2 = atoi(num2_str.c_str());
    if(oper == 1) return num1 + num2;
    else if(oper == 2) return num1 - num2;
    else if(oper == 3) return num1 * num2;
    else if(oper == 4) return num1 / num2;
    else if(oper == 5) return num1 % num2;

}


int main()
{
    string Calculation_Line_Input = "2 * ( 3 + 4 ) * 5";

    cout << GetMathLine(Calculation_Line_Input) << " ";
    Calculation_Line_Input = SwitchMathLine(Calculation_Line_Input, to_string(MathFunc(GetMathLine(Calculation_Line_Input))));
    cout << GetMathLine(Calculation_Line_Input);
    while(ProcessAmount(Calculation_Line_Input)){
        Calculation_Line_Input = SwitchMathLine(Calculation_Line_Input, to_string(MathFunc(GetMathLine(Calculation_Line_Input))));

    }
    cout << Calculation_Line_Input;

    /*bool HaveSymbol = false;
    while(HaveSymbol == false){
        cout << SwitchMathLine(Calculation_Line_Input, to_string(MathFunc(GetMathLine(Calculation_Line_Input))));
    }
    */
    //cout << MathFunc("1 + 2");
    return 0;


}
