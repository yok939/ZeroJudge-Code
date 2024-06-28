#include <bits/stdc++.h>
using namespace std;

int n, a, p[505], max_i = 0, max_num = 0, total = 0, mL, mR;

int main(){
	cin >> n >> a;
	for(int i = 1; i <= n; i++){
		cin >> p[i];
		total += p[i];
		if(p[i] > max_num){
			max_i = i;
			max_num = p[i];
		}
	}
	total -= max_num;
	mL = max(max_i - a / 2 - abs(max_i + a / 2 - min(max_i + a / 2, n)), 1); 
	mR = min(max_i + a / 2 + abs(max_i - a / 2 - max(max_i - a / 2, 1)), n);
	for(int i = mL; i <= mR; i++){
		if(i != max_i){
			total -= p[i];
			max_num += p[i];
		}
	}	 
	cout << max_num << ' ' << total << '\n';
	return 0;
}
