#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll t, n, m, f[2][1 << (11 + 1)], *f0, *f1, P = 1000000007;
int main(){
	cin >> t;
	for(int cas = 1; cas <= t; ++cas){
		cin >> n >> m;
		f0 = f[0];
		f1 = f[1];
		fill(f1, f1 + (1 << (m + 1)), 0);
		f1[0] = 1;
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j){
				bool bad;
				cin >> bad;
				bad ^= 1;
				swap(f0, f1);
				fill(f1, f1 + (1 << (m + 1)), 0);
				for(int s = 0; s < 1 << (m + 1); ++s){
					if(f0[s]){
						bool lt = s >> j & 1, up = s >> (j + 1) & 1;
						if(bad){
							if(!lt && !up) f1[s] = (f1[s] + f0[s]) % P;
						}
						else{
							f1[s ^ 3 << j] = (f1[s ^ 3 << j] + f0[s]) % P;
							if(lt != up) f1[s] = (f1[s] + f0[s]) % P;
						}
					}
				}
			}
			swap(f0, f1);
			fill(f1, f1 + (1 << (m + 1)), 0);
			for(int s = 0; s < 1 << m; ++s) f1[s << 1] = f0[s];
		}
		cout << "Case " << cas << ": " << f1[0] << '\n';
	}

}
