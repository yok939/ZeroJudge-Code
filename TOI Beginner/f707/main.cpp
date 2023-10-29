#include <iostream>

using namespace std;

int main()
{
    long long a, b;
    cin >> a;
    while(cin >> b, b)
        if(a%7!=0&&b%7==0||
           a%7==0&&b%7==0&&a%70<b%70||
           a%7!=0&&b%7!=0&&a%77>b%77
           )
           a = b;
    cout << a;
    return 0;
}
