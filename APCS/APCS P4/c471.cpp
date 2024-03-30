#include <bits/stdc++.h>
#define LL long long
using namespace std;

vector<pair<double, LL>> item;
double t1[100010];
double t2[100010];

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    LL n, k=1, ans=0;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> t1[i];
    for(int i = 0; i < n; i++){
        cin >> t2[i];
        item.push_back({t1[i]/t2[i], i});
    }
    sort(item.begin(), item.end());
    LL psum=0;
    for(int i = 0; i < n; i++){
        ans+=psum*t2[item[i].second];
        psum+=t1[item[i].second];
    }
    cout << ans << '\n';
    return 0;
}