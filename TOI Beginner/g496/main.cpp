#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    double a, s;
    cin >> a >> s;
    cout.precision(0);
    cout << fixed<<ceil(s/a);
}
