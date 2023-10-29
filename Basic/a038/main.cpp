#include <iostream>
#include <string>
using namespace std;

int main() {
    int input_i;
    string input_s1, input_s2="";
    bool clearout_ZERO=false;
    cin >> input_i;
    input_s1 = to_string(input_i);
    for(int i = input_s1.length()-1; i >= 0; i--){
        if(input_s1[i]=='0'){
            if(clearout_ZERO==true || input_s1.length() == 1)
            input_s2 = input_s2 + input_s1[i];
        }
        else if(input_s1[i]!='0'){
            input_s2 = input_s2 + input_s1[i];
            clearout_ZERO=true;
        }
    }
    cout << input_s2;
}
