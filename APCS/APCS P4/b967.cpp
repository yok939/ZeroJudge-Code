#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct nd{
	vector<ll> adj;
}p[100005];
ll n, a, b, c, dis[100005];

void dfs(ll now, ll par){
	for(auto v : p[now].adj){
		if(v == par) continue;
		dis[v] = dis[now] + 1;
		if(dis[v] > dis[c]) c = v;
		dfs(v, now);		
	}
}


int main(){
	cin >> n;
	for(int i = 0; i < n - 1; i++){
		cin >> a >> b;
		p[a].adj.push_back(b);
		p[b].adj.push_back(a);
	}
	dfs(0, -1);
	dis[c] = 0, dfs(c, -1);	
	cout << dis[c] << '\n';
	return 0;
}
