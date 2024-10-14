#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL n, l, r, ans = 0, cnt = 0;
vector<pair<LL, LL>> vis;
int main(){
	cin >> n;	
	for(int i = 0; i < n; i++){
		cin >> l >> r;
		vis.push_back({l, 0});
		vis.push_back({r, 1});
	}
	sort(vis.begin(), vis.end());
	LL tmp = 0;
	for(int i = 0; i < n * 2; i++){
		if(vis[i].second){	
			if(tmp >= cnt){
				ans = vis[i].first;
				cnt = tmp;
			}
			tmp--;
		}	
		else tmp++;
	}
	cout << ans << '\n';
}
