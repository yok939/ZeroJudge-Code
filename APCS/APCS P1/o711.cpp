#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, w1, w2, h1, h2, a, h = 0, tmp = 0, pre = 0, ans = 0;
int main(){
	cin >> n >> w1 >> w2 >> h1 >> h2;
	while(n--){
		cin >> a;	
		tmp += a;
		h = min(h1 + h2, (tmp <= w1 * w1 * h1 ? tmp / (w1 * w1) : h1 + (tmp - (w1 * w1 * h1)) / (w2 * w2)));
		ans = max(ans, h - pre);
		pre = h;
	}
	cout << ans << '\n';
}
