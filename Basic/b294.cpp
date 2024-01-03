#include <iostream>

using namespace std;

int main(){
    int n, can, total=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> can;
        total+=can*i;
    }
    cout << total;
    return 0;
}