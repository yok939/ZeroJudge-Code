#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long n, t, v1 ,v2;
    bool is_move=true;
    cin >> n;
    vector<int> x(n);
    for(int &xi: x){
        cin >> xi;
    }
    cin >> t, t--;
    for(v1 = t; v1 && x[v1-1] <= x[v1] ;v1--);
    for(v2 = t; v2<n-1 && x[v2+1] <= x[v2] ;v2++);
    cout << (x[v1]<x[v2]? v1+1 : v2+1) << endl;

}
