#include <iostream>
using namespace std;
int main(){
    int d;
    cin >> d;
    cout << (d<0?abs(d)*2:d+(d-1));
    return 0;
}

/*

1 1
2 -1
3 2
4 -2
5 3
*/