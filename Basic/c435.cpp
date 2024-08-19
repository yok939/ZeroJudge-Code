#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL n, a[100005], ans = 0, amin = INT_MAX;
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	amin = a[n];
	for(int i = n - 1; i >= 1; i--){
		ans = max(ans, a[i] - amin); 
		amin = min(amin, a[i]);	
	}
	cout << ans << '\n';

}
