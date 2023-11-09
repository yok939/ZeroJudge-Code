#include <iostream>

using namespace std;

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int input1, input2, i=1,RESULT_=0;
    cin >> input1 >> input2;
    cout << gcd(input1, input2);
    return 0;
}
