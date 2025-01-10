#include <bits/stdc++.h>
#define ll long long
#define el '\n'
using namespace std;

ll x, y, arr[1005][1005], psum[1005][1005], n, tx[2], ty[2];
int main(){
	memset(psum, 0, sizeof(psum));
	cin >> x >> y;
	for(int i = 1; i <= y; i++){
		for(int j = 1; j <= x; j++){
			cin >> arr[i][j];
		}
	}
	for(int i = 1; i <= y; i++){
		for(int j = 1; j <= x; j++){
			psum[i][j] = arr[i][j] + psum[i - 1][j] + psum[i][j - 1] - psum[i - 1][j - 1];
		}
	}
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> tx[0] >> tx[1] >> ty[0] >> ty[1];
		for(int i = 0; i < 2; i++) tx[i]++, ty[i]++;
		cout << psum[ty[1]][tx[1]] - psum[ty[0] - 1][tx[1]] - psum[ty[1]][tx[0] - 1] + psum[ty[0] - 1][tx[0] - 1] << " \n"[i == n - 1];
	}
}
