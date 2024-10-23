#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct nd{
	ll l, r;
}a[200005];

ll n, m, p, dp[200005], psum[200005];
vector<ll> ri;
int main(){
	cin >> n >> m >> p;
	for(int i = 0; i < n; i++) cin >> a[i].l;
	for(int i = 0; i < n; i++){	
		cin >> a[i].r;
	    ri.push_back(a[i].r);
	}
	sort(a, a + n, [&](auto a, auto b){return a.r < b.r;});
	sort(ri.begin(), ri.end());
	ll len = unique(ri.begin(), ri.end()) - ri.begin();
	for(int i = 0; i < n; i++){	
		ll nl = lower_bound(ri.begin(), ri.begin() + len, a[i].l) - ri.begin(), nr = lower_bound(ri.begin(), ri.begin() + len, a[i].r) - ri.begin();
		dp[nr] = (dp[nr] + ((nr - 1 < 0 ? 0 : psum[nr - 1]) - (nl - 1 < 0 ? 0 : psum[nl - 1]))) % p;
		if(!a[i].l) dp[nr] = (dp[nr] + 1) % p;
        psum[nr] = ((nr - 1 < 0 ? 0 : psum[nr - 1]) + dp[nr]);
        dp[nr] = abs(dp[nr]) % p;
		//cout << nl << nr << ' ' << dp[nr] << ' ' << psum[nr] << '\n';
	}
    cout << (ri[len - 1] == m ? dp[len - 1] : 0) << '\n';	
}

