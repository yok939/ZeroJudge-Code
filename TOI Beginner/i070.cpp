#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t[200], s[200], ls=0, rs=0;
	cin >> n;
	for(int i=0;i<n;i++) cin >> t[i];
	for(int i=0;i<n;i++) cin >> s[i];
	for(int i=0;i<n;i++){
		ls=-1, rs=-1;
		for(int j=i;j<n;j++){
			if(t[i]==s[j]){
				ls=abs(i-j);
				break;
			}
		}
		for(int j=i;j>=0;j--){
			if(t[i]==s[j]){
				rs=abs(i-j);
				break;
			}
		}
		if(rs==-1&&ls==-1){
			cout << -1;
		}
		else{
			if(rs==-1) cout << ls;
			else if(ls==-1) cout << rs;
			else cout << min(ls, rs);
		}
		cout << ' ';
	}
	return 0;
	
}
