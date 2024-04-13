#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL rec(LL a[], int L, int R){
	if(L + 1 >= R) return a[L];
	int M = (R + L) / 2;
	LL cnt = max(rec(a, L, M), rec(a, M, R)), now = 0, max_num = INT_MIN;
	for(int i = L; i < R; i++){
		if(now < 0) now = a[i];
		else now += a[i];
		max_num = max(now, max_num);
	}
	return max(cnt, max_num);
}

LL t, n, a[100010];

int main(){
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++) cin >> a[i];
		cout << rec(a, 0, n) << '\n';
	}
	return 0;
}
