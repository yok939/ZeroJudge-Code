#include <bits/stdc++.h>
#define LL long long
using namespace std;

bool is_prime(LL v){
	if(v == 1) return false;
	if(v == 2 || v == 3) return true;
	if(!(v % 2) || !(v % 3)) return false;
	for(LL i = 5; i * i <= v; i += 6){
		if(!(v % i) || !(v % (i + 2))) return false; 
	}
	return true;
}


LL a, b, tmp;
int main(){
	while(cin >> a >> b){
		tmp = 0;
		for(int i = a; i <= b; i++){
			if(is_prime(i)) tmp++;	
		}
		cout << tmp << '\n';
	}	
}
