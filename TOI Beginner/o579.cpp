#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll t, ans = 0;
int main(){
	cin >> t;
	cout << min({3 * t, 299 + (3 * max(0ll, t - 300)), 699 + (3 * max(0ll, t - 750))}) << '\n';
}
