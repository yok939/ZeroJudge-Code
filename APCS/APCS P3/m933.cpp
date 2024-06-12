#include <bits/stdc++.h>
#define LL long long
using namespace std;

struct node{
    int a = -1, b = -1, subr[2] = {-1, -1};
    vector<LL> adj;
}gr[52005];

LL p, q, r, m, t1, t2, ans_max = INT_MIN;

void bfs(){
    queue<pair<LL, LL>> qq;
    for(int i = 1; i <= p; i++){
        qq.push({i, 0});
    }   
    while(!qq.empty()){
        ans_max = max(ans_max, qq.front().second);
        for(auto i : gr[qq.front().first].adj){
            if(gr[i].b >= 1 && gr[i].b <= 3){
                if(gr[i].subr[0] == -1) gr[i].subr[0] = gr[qq.front().first].a;
                else{
                    gr[i].subr[1] = gr[qq.front().first].a;
                    if(gr[i].b == 1) gr[i].a = (gr[i].subr[0] && gr[i].subr[1]);
                    else if(gr[i].b == 2) gr[i].a = (gr[i].subr[0] || gr[i].subr[1]);
                    else if(gr[i].b == 3) gr[i].a = (!(gr[i].subr[0] == gr[i].subr[1]));
                    qq.push({i, qq.front().second + 1});
                }
            }
            else if(gr[i].b == 4){
                gr[i].a = !(gr[qq.front().first].a);
                qq.push({i, qq.front().second + 1});
            }
            else gr[i].a = gr[qq.front().first].a;
        }
        qq.pop();
    }
}

int main(){
    cin >> p >> q >> r >> m;
    for(int i = 1; i <= p; i++) cin >> gr[i].a;
    for(int i = p + 1; i <= p + q; i++) cin >> gr[i].b;
    for(int i = p + q + 1; i <= p + q + r; i++) gr[i].b = 5;
    while(m--){
        cin >> t1 >> t2;
        gr[t1].adj.push_back(t2);
    }
    bfs();
    cout << ans_max << '\n';
    for(int i = p + q + 1; i <= p + q + r; i++){
        if(i != p + q + 1) cout << ' ';
        cout << gr[i].a;
    }
    cout << '\n';
    return 0;
}