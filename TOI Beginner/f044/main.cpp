#include <iostream>

using namespace std;

int main()
{
    int N, T, tempN=0, tempT=0, Days=0;
    cin >> N >> T;
    tempN=N;
    while(tempT!=T){
        tempT+=N+tempT;
        Days++;
    }
    cout << Days;

}

//1 0  // 2 0  // 3 0  //
//1 1  // 2 2  // 3 3  //
//1 3  // 2 6  // 3 9  //
//1 7  // 2 14 // 3 21 //
//1 15 //
