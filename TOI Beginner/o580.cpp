#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll x, y, now = 1, ans = 1;
int main(){
	cin >> x >> y;
	for(ll i = x; i <= y; i++){
		ll tmp = 0;
		for(int j = 1; j <= sqrt(i); j++){
			if(!(i % j)){
				if(j == sqrt(i)) tmp++;
				else tmp += 2;
			}
		}
		if(tmp > now) ans = i, now = tmp;
	}
	cout << ans << ' ' << now << '\n';
}
