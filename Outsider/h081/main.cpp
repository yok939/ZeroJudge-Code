#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, d, x, y, time=0, cash_out=0;
    bool stock_have=true;
    cin >> n >> d;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    x=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>=x+d&&stock_have==true){
            cash_out+=a[i]-x;
            x=a[i];
            stock_have=false;
        }
        else if(a[i]<=x-d&&stock_have==false){
            x=a[i];
            stock_have=true;
        }
    }
    cout << cash_out;


}
