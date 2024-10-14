#include <bits/stdc++.h>
using namespace std;

int n, a = INT_MIN, b = INT_MAX;
int main(){
	cin >> n;
	vector<int> c(n);
	for(int i = 0; i < n; i++){
		cin >> c[i];
		if(c[i] < 60) a = max(c[i], a);
		else b = min(c[i], b);
	}
	sort(c.begin(), c.end());
	for(int i = 0; i < n; i++) cout << c[i] << ' ';
	cout << '\n';
	cout << (a == INT_MIN ? "best case" : to_string(a)) << '\n';
	cout << (b == INT_MAX ? "worst case" : to_string(b)) << '\n';
}

