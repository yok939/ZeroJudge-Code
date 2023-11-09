#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c, min0=10001, min1=10001, m, L;
    cin >> c;
    for(int i=0;i<c;i++){
        cin >> m;
        if(m<min1) swap(m, min1);
        if(min1<min0) swap(min1, min0);
    }
    cin >> L;
    if(min1+min0 < 2*L) cout << "You are too black!";
    else cout << L-min0;
    return 0;
}
