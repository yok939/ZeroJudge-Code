#include <iostream>

using namespace std;

int main()
{
    int n, m, c, foo1=1, Max_;
    bool Have_Parking = false;
    cin >> Max_;
    while(foo1<=Max_){
        cin >> n >> m >> c;
        Have_Parking = false;
        n++;
        while(n<m){
            if(n%c!=0){
                cout << n << " ";
                Have_Parking = true;
            }
            n++;
        }
        if(Have_Parking == false){
            cout << "No free parking spaces.";
        }
        cout << endl;
        foo1++;
    }
}
