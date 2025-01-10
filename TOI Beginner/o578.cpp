#include <bits/stdc++.h>
#define ll long long 
using namespace std;

ll l, w, h, k;
int main(){
	cin >> l >> w >> h >> k;
	if(!(l % k) && !(w % k) && !(h % k)) cout << (l / k) * (w / k) * (h / k) << '\n';
	else cout << 0 << '\n'; 
}
