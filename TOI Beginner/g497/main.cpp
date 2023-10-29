#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    long long n, use=0;
    cin >> n;
    vector<long long> x(n);
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    for(int i=0, floor=1;i<n;i++){
        if(x[i]-floor<0){
            use+=abs(x[i]-floor)*2;
        }
        else{
            use+=(x[i]-floor)*3;
        }
        floor=x[i];
    }
    cout << use;
    return 0;
}
