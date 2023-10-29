#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long a=0, b=0, times=1, temp;
    string input;
    cin >> input;
    for(int i=0;input[i];i++){
        (i%2==1)? a+=(input[i]-48):b+=(input[i]-48);
        temp/=10;

    }
    cout << abs(a-b);

}
