#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL f(LL x){
	if(x == 1) return 1;
	else{
		if(x & 1){
			return f(x - 1) + f(x + 1);
		}
		else return f(x / 2);
	}
}

LL x;
int main(){
	cin >> x;
	cout << f(x) << '\n';

}
