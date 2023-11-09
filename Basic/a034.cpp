#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    string out_ = "";
    int MAX_ = 0, input_;
    while(cin >> input_){
        string out_ = "";
        int MAX_ = 0;
        while(input_>=pow(2, MAX_+1)){
            MAX_++;

        }
        while(MAX_>=0){
            if(input_ - pow(2, MAX_) < 0){
                out_ = out_ + "0";
            }else{
                out_ = out_ + "1";
                input_ = input_ - pow(2, MAX_);
            }
            MAX_--;
        }
        cout<<out_<<endl;
    }

}
