#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int n, m, i, temp = 0, length_, sum = 0, rep = 0;
    cin >> n >> m;
    length_ = to_string(n).length();
    i = n;
    while(i<=m){
        n = i;
        temp = 0, sum = 0, rep = 0;
        while(n){
            temp = n % 10;
            sum += pow(temp, length_);
            if(sum>i){
                break;
            }
            n /= 10;
            rep++;
        }
        if(sum==i){
            cout << sum << " ";
        }
        i++;
    }

    return 0;
}
