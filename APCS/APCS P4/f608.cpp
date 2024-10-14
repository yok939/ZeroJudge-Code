#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct nd{
	ll x, y;	
}p[200005];

ll n;
int main(){
	cin >> n;
	for(int i = 0; i < n; i++) cin >> p[i].x >> p[i].y;
	sort(p, p + n, [&](auto a, auto b){return a.x < b.x || (a.x == b.x && a.y < b.y);});
	vector<ll> dp;
	for(int i = 0; i < n; i++){
		ll pos = upper_bound(dp.begin(), dp.end(), p[i].y) - dp.begin();	
		if(pos == dp.size()) dp.push_back(p[i].y);
		else dp[pos] = p[i].y;
	}	
	cout << dp.size() << '\n';
}
