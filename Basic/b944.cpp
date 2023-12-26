#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b; 
    bool first=1;
    cin >> n;
    pair<int, int> toilet(0, 0);
    vector<pair<int, int>> toilets(n+2, toilet);
    while(cin >> a >> b){
        bool flag=0;
        for(int i=1;!flag&&i<=n;i++){
            if(toilets[i].first){
                continue;
            }
            if(!toilets[i+1].first&&!toilets[i-1].first){
                toilets[i].first=a;toilets[i].second=b;flag=1;
            }
        }
        if(!flag){
            for(int i=1;!flag&&i<=n;i++){
                if(toilets[i].first){
                    continue;
                }
                toilets[i].first=a;toilets[i].second=b;flag=1;
            }
        }
        if(first) first=0;
        else cout << '\n';

        if(!flag) cout << "  Not enough\n"; 
        cout << "Number:";
        for(int i=1;i<=n;i++){
            cout << ' ' << toilets[i].first;
        }
        cout << '\n';
        cout << "  Time:";
        for(int i=1;i<=n;i++){
            cout << ' ' << toilets[i].second;
        }
        cout << '\n';
        for(int i=1;i<=n;i++){
            toilets[i].second && toilets[i].second--;
            if(!toilets[i].second) toilets[i].first=0;
        }
    }

    return 0;
}