#include <bits/stdc++.h>
using namespace std;

int t;
string s;
map<char, char> mp{{')', '('}, {']', '['}, {'}', '{'}, {'>', '<'}};
int main(){
	cin >> t;
	while(t--){
		cin >> s;
		if(s.size() & 1) cout << "N\n";
		else{
			int tmp = 0; 
			bool flag = 1;
			stack<char> stk;
			for(auto c : s){
				if(c == ')' || c == '>' || c == ']' || c == '}'){
					if(!stk.empty() && stk.top() == mp[c]) stk.pop();
					else{
						flag = 0;
						break;
					}
				}
				else stk.push(c);	
			}
			if(flag) cout << "Y\n";
			else cout << "N\n";
		}
	}
}