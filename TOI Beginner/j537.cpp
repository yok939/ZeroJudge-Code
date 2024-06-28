#include <bits/stdc++.h>
using namespace std;

struct node{
	int a, p;
}fac[355];

bool cmp(node a, node b){
	return a.a > b.a;
}

int n, h, ans = 0;

int main(){
	cin >> n; 
	for(int i = 0; i < n; i++) cin >> fac[i].a >> fac[i].p;
	sort(fac, fac + n, cmp);
	cin >> h;
	for(int i = 0; i < n; i++){
		if(h){
			ans++;
			h = max(0, h - fac[i].p);
		}
		else break;
	}
	cout << ans << '\n';
	return 0;
}
