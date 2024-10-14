#include <bits/stdc++.h>
using namespace std;

int n, h[105], ans = 0;
int main(){
	cin >> n;
	h[0] = h[n + 1] = 100000;
	for(int i = 1; i <= n; i++) cin >> h[i];
	for(int i = 1; i <= n; i++){
		if(!h[i]) ans += min(h[i - 1], h[i + 1]);
	}
	cout << ans << '\n';
}
