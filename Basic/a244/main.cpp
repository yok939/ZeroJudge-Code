#include <iostream>

using namespace std;

int main()
{
    long int amount,a,b,c;
    cin >> amount;
    for(int i=0;i<amount;i++){
        cin >> a >> b >> c;
        if(a==1){
            cout << b+c << endl;
        }
        else if(a==2){
            cout << b-c << endl;
        }
        else if(a==3){
            cout << b*c << endl;
        }
        else if(a==4){
            cout << b/c << endl;
        }
    }
}

