#include <iostream>
#include <string>

using namespace std;

int RomanConvert(string input){
    int OutputDex = 0;
    int i = 0;
    while(i < input.length()){
        if(input[i] == 'I' && input[i + 1] == 'V'){
            OutputDex += 4;
            i += 2;

        }
        else if(input[i] == 'I' && input[i + 1] == 'X'){
            OutputDex += 9;
            i += 2;

        }
        else if(input[i] == 'X' && input[i + 1] == 'L'){
            OutputDex += 40;
            i += 2;

        }
        else if(input[i] == 'X' && input[i + 1] == 'C'){
            OutputDex += 90;
            i += 2;

        }
        else if(input[i] == 'C' && input[i + 1] == 'D'){
            OutputDex += 400;
            i += 2;

        }
        else if(input[i] == 'C' && input[i + 1] == 'M'){
            OutputDex += 900;
            i += 2;

        }
        else{
            if(input[i] == 'I'){
                OutputDex += 1;

            }
            else if(input[i] == 'V'){
                OutputDex += 5;

            }
            else if(input[i] == 'X'){
                OutputDex += 10;

            }
            else if(input[i] == 'L'){
                OutputDex += 50;

            }
            else if(input[i] == 'C'){
                OutputDex += 100;

            }
            else if(input[i] == 'D'){
                OutputDex += 500;

            }
            else if(input[i] == 'M'){
                OutputDex += 1000;

            }
            i++;

        }

    }
    return OutputDex;


}

string NumberConvert(int input){
    string OutputRoman;
    if(input < 0) input = input * -1;
    while(true){
        if((input - 1000) >= 0){
            OutputRoman += "M";
            input -= 1000;

        }
        else if((input - 900) >= 0){
            OutputRoman += "CM";
            input -= 900;

        }
        else if((input - 500) >= 0){
            OutputRoman += "D";
            input -= 500;

        }
        else if((input - 400) >= 0){
            OutputRoman += "CD";
            input -= 400;

        }
        else if((input - 100) >= 0){
            OutputRoman += "C";
            input -= 100;

        }
        else if((input - 90) >= 0){
            OutputRoman += "XC";
            input -= 90;

        }
        else if((input - 50) >= 0){
            OutputRoman += "L";
            input -= 50;

        }
        else if((input - 40) >= 0){
            OutputRoman += "XL";
            input -= 40;

        }
        else if((input - 10) >= 0){
            OutputRoman += "X";
            input -= 10;

        }
        else if((input - 9) >= 0){
            OutputRoman += "IX";
            input -= 9;

        }
        else if((input - 5) >= 0){
            OutputRoman += "V";
            input -= 5;

        }
        else if((input - 4) >= 0){
            OutputRoman += "IV";
            input -= 4;

        }
        else if((input - 1) >= 0){
            OutputRoman += "I";
            input -= 1;

        }
        else{
            break;

        }

    }
    return OutputRoman;


}


int main(){
    string a = " ", b = " ";
    while(true){
        cin >> a;
        if(a == "#"){
            break;
        }
        cin >> b;
        if(RomanConvert(a) - RomanConvert(b) == 0){
            cout << "ZERO\n";

        }
        else{
            cout << NumberConvert(RomanConvert(a) - RomanConvert(b)) << endl;

        }

    }
    return 0;


}
