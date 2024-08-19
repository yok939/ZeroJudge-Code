#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL n, a;
bool flag = 0;
vector<LL> v;
int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	flag = 0;
	for(auto i : v){
		if(flag) cout << ' ';
		cout << i;	
		flag = 1;
	}
	cout << '\n';
	v.erase(unique(v.begin(), v.end()), v.end());
	sort(v.begin(), v.end(), greater<LL>());
	flag = 0;
	for(auto i : v){
		if(flag) cout << ' ';
		cout << i;	
		flag = 1;
	}
	cout << '\n';
}
