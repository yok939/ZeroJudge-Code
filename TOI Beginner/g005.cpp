#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string buffer;
    cin >> s;
    bool rev = false;
    for(char c : s){
        if(c == '+' || c == '-') {
			reverse(buffer.begin(), buffer.end());
			cout << buffer;
			buffer.clear();
			rev = (c == '-');
		} else {
			if(rev) {
				buffer += c;
			} else {
				cout << c;
			}
		}
    }
    reverse(buffer.begin(), buffer.end());
	cout << buffer << "\n";
}