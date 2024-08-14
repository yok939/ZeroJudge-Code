#include <bits/stdc++.h>
using namespace std;

int n, k[105], t;
int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> t;
		if(!(t % 3) && !(t % 2)) k[i] = 1;
		else if(t % 3 && (t % 10) & 1) k[i] = 2;
		else if(floor(sqrt(t)) * floor(sqrt(t)) == t || (t % 7 && !(t & 1))) k[i] = 3;
		else k[i] = 0;
	}
	for(int i = 0; i < n; i++){
		if(i) cout << ' ';
		cout << k[i];
	}

}
