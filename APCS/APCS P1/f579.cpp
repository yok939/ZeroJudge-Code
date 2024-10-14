#include <bits/stdc++.h>
using namespace std;
int a, b, n, tmp, ans = 0;
int main(){
	cin >> a >> b >> n;
	while(n--){
		int aa = 0, bb = 0;
		while(cin >> tmp && tmp != 0){
			if(tmp == a) aa++;
			if(tmp == b) bb++;
			if(tmp == -a) aa--;
			if(tmp == -b) bb--;
		}
		if(aa && bb) ans++;
	}
	cout << ans << '\n';
}
