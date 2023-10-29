#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int n, m, sum, MM, powMM, output_ = 0, times_amount=0, already_times_amount=1;
    cin >> times_amount;
    while(already_times_amount <= times_amount){
        powMM = 0;
        MM = 0;
        sum = 0;
        cin >> n >> m;
        while(powMM<=m){
            MM++;
            powMM = round(pow(MM, 2));
            if(powMM>=n&&powMM<=m){
                sum+=powMM;
            }
        }
        cout << "Case " <<  already_times_amount << ": " << sum << endl;
        already_times_amount++;


    }
}
