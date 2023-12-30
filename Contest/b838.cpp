#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int ans=0;
        string input;
        stack<char> st;
        cin >> input;
        for(auto c:input){
            if(c=='('){
                st.push(c);
                ans++;
            }
            else{
				if(!st.empty()&&st.top()=='(') st.pop();
				else st.push(c);
			}
        }
        if(st.empty()) cout<<ans<<'\n';
		else cout<<"0\n";
    }
    return 0;
}
