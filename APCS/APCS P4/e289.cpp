#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll m, n, ans = 0;
string a;
unordered_map<string, ll> mp;
queue<string> q;
unordered_set<string> st;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> m >> n;
	for(int i = 0; i < n; i++){
		cin >> a;
		q.push(a);
		mp[a]++;
		if(mp[a] == 1) st.insert(a);
		if(i >= m){	
			mp[q.front()]--;
			if(!mp[q.front()]) st.erase(q.front());
			q.pop();
		}
		if(i >= m - 1 && st.size() == m) ans++;
	}	
	cout << ans << '\n';
}
