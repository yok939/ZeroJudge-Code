#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input_, input_temp, love="love",Love="Love";;
    long long checker=0, temp1=0;
    getline(cin, input_);
    input_temp = input_;
    while(temp1<26){
        if(input_temp.find(love)!=input_temp.npos||input_temp.find(Love)!=input_temp.npos){
            cout << temp1;
            return 0;
        }
        for(int i=0;i<input_.length();i++){
            if(input_temp[i]>=65&&input_temp[i]<=90){
                if(input_temp[i]==90){
                    input_temp[i]=65;
                }
                else{
                    input_temp[i]+=1;
                }

            }

            else if(input_temp[i]>=97&&input_temp[i]<=122){
                if(input_temp[i]==122){
                    input_temp[i]=97;
                }
                else{
                    input_temp[i]+=1;
                }
            }
        }
        temp1++;
    }

}



