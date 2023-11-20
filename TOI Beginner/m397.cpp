#include <iostream>

using namespace std;

int main(){
	int n, m, x, y, a=1, b=1;
	cin >> n >> m >> x >> y;
	for(a;a<=m;a++){
		b=m-a;	
		if(x*a+y*b==n){
			cout << a << ' ' << b;
			break;	
		}
	}
	if(a>m){
		cout << -1 << ' ' << -1;
	} 
	return 0;
}
