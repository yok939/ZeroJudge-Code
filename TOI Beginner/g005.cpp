#include <bits/stdc++.h>
using namespace std;

string s;

int main(){
	cin >> s;
	int len = s.length();
	for(int i = 0; i < len; i++){
		if(s[i] == '-') reverse(next(s.begin(), i + 1), min(find(next(s.begin(), i + 1), s.end(), '+'), 
															find(next(s.begin(), i + 1), s.end(), '-')));
		else if(s[i] != '+' && s[i] != '-') cout << s[i];
	}
	cout << '\n';
	return 0;
}