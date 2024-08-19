#include <bits/stdc++.h>
#define LL long long
using namespace std;

int main(){
    string mode, nn;
    LL n, m, k, tmp1, o = 1;
    while(cin >> nn){
        n = stoi(nn);
        printf("Line #%d\n", o);
        vector<LL> team(1000010, -1);
        vector<queue<LL>> mmq(n + 1);
        queue<LL> tq;
        for(int i = 0;i < n; i++){
            cin >> k;
            for(int j = 0; j < k; j++){
                cin >> tmp1;
                team[tmp1] = i;
            }
        }
        while(cin >> mode && mode != "STOP"){
            if(mode == "ENQUEUE"){
                cin >> tmp1;
                int id = team[tmp1];
                if(id != -1){
                    if(mmq[id].size() == 0){
                        tq.push(id);
                    }
                    mmq[id].push(tmp1);
                }
                else{
                    tq.push(n);
                    mmq[n].push(tmp1);
                }
            }
            else if(mode == "DEQUEUE"){
                cout << mmq[tq.front()].front() << '\n';    
                mmq[tq.front()].pop();
                if(mmq[tq.front()].size() == 0 || tq.front() == n) tq.pop();
            }
        }
        o++;
    }
    return 0;
}