#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL n(LL x){
	if(x <= 1) return 1;
	else return n(x - 1) + x * x - x + 1;
}

LL x;
int main(){
	cin >> x;
	cout << n(x) << '\n';
}
