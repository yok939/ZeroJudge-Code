#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int n, m, temp=0, sum=0;
    bool NoneCheck = true;
    cin >> n >> m;

    while(n <= m){
        temp = n;
        sum = 0;
        while(temp){
            cout << temp % 10 << " " << to_string(n).length() << " ";
            sum += round(pow(temp % 10, to_string(n).length()));
            cout << sum << " " << round(pow(temp % 10, to_string(n).length())) << " | ";
            if(sum > n){
                break;
            }
            temp /= 10;

        }
        if(sum==n){
            NoneCheck = false;
            cout << sum << " ";
        }
        cout << endl;
        n++;
    }
    if(NoneCheck){
        cout << "none";
    }
    return 0;
}
