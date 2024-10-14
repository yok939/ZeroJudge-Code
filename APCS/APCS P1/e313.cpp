#include <bits/stdc++.h>
using namespace std;

int n, tmp, now = INT_MAX;
string ans, s;
set<char> st;
int main(){
	cin >> n;
	while(n--){
		st.clear();
		cin >> s;
		for(auto c : s) st.insert(c);	
		if(st.size() <= now){
			if(st.size() == now) ans = min(ans, s);
			else{
				ans = s;
				now = st.size();
			}
		}
	}
	cout << ans << '\n';
}
