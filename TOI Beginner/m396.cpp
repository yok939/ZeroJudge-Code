#include <iostream>

using namespace std;

int main(){
	int t, g, w, e, b;
	cin >> t >> g >> w >> e >> b;
	if(g+w+e+b<=t){
		cout << g+w+e+b;
	}
	else{
		cout << -1;
	}	
	return 0;
	
}
