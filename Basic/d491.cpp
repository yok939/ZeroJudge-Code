#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL a, b;
int main(){
	cin >> a >> b;
	if(a > b) swap(a, b);
	a & 1 && a++;
	b & 1 && b--;
	cout << ((((b - a) / 2 + 1) * (b + a)) / 2) << '\n';
}
