#include <iostream>
#include <string>


using namespace std;

int main()
{
    int amount_, sum, c3k = 0, c3k1 = 0, c3k2 = 0;
    cin >> amount_;
    while(amount_>0){
        cin >> sum;
        if(sum%3==0){
            c3k++;
        }
        else if(sum%3==1){
            c3k1++;
        }
        else if(sum%3==2){
            c3k2++;
        }
        amount_--;
    }
    cout << c3k << " " << c3k1 << " " << c3k2 << endl;

}
