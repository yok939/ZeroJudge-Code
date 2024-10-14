#include <bits/stdc++.h>
using namespace std;

int a = 0, b = 0, tmp;
int main(){
	for(int i = 0; i < 2; i++){
		int aa = 0, bb = 0;
		for(int j = 0; j < 2; j++){
			for(int k = 0; k < 4; k++){
				cin >> tmp;
				if(j & 1) bb += tmp;
				else aa += tmp;
			}
		}
		cout << aa << ':' << bb << '\n';
		if(aa > bb) a++;
		else b++;
	}
	cout << (a == b ? "Tie" : (a > b ? "Win" : "Lose")) << '\n';
}
