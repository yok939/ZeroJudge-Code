#include <iostream>
using namespace std;
int main(){
    int t, num0, num1;
    cin >> t;
    while(t--){
        cin >> num0;
        num1=num0%10;num0/=10;
        while(num0){
            num1*=num0%10;num0/=10;
        }
        cout << num1 << '\n';
    }
    return 0;
}