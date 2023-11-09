#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
    int a1, b1, c1, a2, b2, c2, n;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> n;
    int ans = INT_MIN ;
    for(int i=0;i<=n;i++){
        int j=n-i;
        int y1 = a1*i*i+b1*i+c1;
        int y2 = a2*j*j+b2*j+c2;
        ans = max(ans, y1 + y2);
    }
    cout << ans << endl;
    return 0;
}
