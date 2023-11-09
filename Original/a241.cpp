#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, counter, x;
    cin >> m;
    while(m--){
        cin >> n;
        counter = 0;
        for(int i=2;i<=n;i++){
            x=i;
            while(!(x%10)) x/=10;
            while(!(x%2)) x/=2;
            while(!(x%5)) x/=5;
            x==1 && counter++;
        }
        cout << counter << '\n';

    }
    return 0;
}
