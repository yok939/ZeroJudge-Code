#include <bits/stdc++.h>
using namespace std;

int n, a, d;
vector<pair<int, pair<int, int>>> v;
int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a >> d;
		v.push_back({a * a + d * d, {a, d}});	
	}
	sort(v.begin(), v.end());
	cout << v[n - 2].second.first << ' ' << v[n - 2].second.second << '\n';

}
