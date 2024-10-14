#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL n, c, a[20005];
int main(){
	cin >> n >> c;
	for(int i = 0; i < n; i++) cin >> a[i];
	LL l = 0, r = (LL) 1e14;
	while(l == r){
		LL mid = (r + l) / 2, mn = INT_MAX;
		LL tmp = c;
		for(int i = 0; i < n; i++){
			if(a[i] > mid) continue;
			else{
				if((mid - a[i]) * (mid - a[i]) <= tmp){
					tmp -= (mid - a[i]) * (mid - a[i]);
					mn = min(mid, mn);
				}
				else mn = min(a[i], mn);
			}
		}
		if(mn < mid) r = mid;
		else l = mid + 1;
	}	
	cout << l - 1 << '\n';
}
