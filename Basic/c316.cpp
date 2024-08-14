#include <bits/stdc++.h>
#define LD long double
using namespace std;

long double dis(LD x1, LD y1, LD x2, LD y2){
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int n, ai, aj;
LD ans = 0, x[1005], y[1005];
int main(){
	cin >> n;
	for(int i = 0; i < n; i++) cin >> x[i] >> y[i];
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(dis(x[i], y[i], x[j], y[j]) > ans){
				ai = i, aj = j;
				ans = dis(x[i], y[i], x[j], y[j]);
			}	
		}
	}
	cout << ai << ' ' << aj << '\n';
}

