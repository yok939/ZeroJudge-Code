#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL n, len, x, ii, ct[200005], ans = 0;
set<LL> st;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    cin >> n >> len;
    for(int i = 1; i <= n; i++){
        cin >> x >> ii;
        ct[ii] = x;
    }
    ans += len;
    st.insert(ct[1]);
    for(int i = 2; i <= n; i++){
        if(st.lower_bound(ct[i]) == st.end()) ans += len - *prev(st.lower_bound(ct[i]));
        else if(st.lower_bound(ct[i]) == st.begin()) ans += *st.lower_bound(ct[i]);
        else ans += *st.lower_bound(ct[i]) - *prev(st.lower_bound(ct[i]));
        st.insert(ct[i]);
    }
    cout << ans << '\n';
    return 0;
}