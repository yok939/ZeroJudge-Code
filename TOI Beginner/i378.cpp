#include <bits/stdc++.h>
using namespace std;

set<pair<int, int>> pt;
bool hav[6005][6005];
int t, x, y, y_max, y_min;

int main(){
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> x >> y;
        pt.insert({y + 3000, x + 3000});
        hav[y + 3000][x + 3000] = 1;
    }
    for(int i = 2000; i < 4000; i++){
        int tmp = 0;
        for(auto j : pt){
            int ny;
            if(j.first > i) ny = i - (j.first - i);
            else if(j.first < i) ny = i + (i - j.first);
            else ny = j.first;
            if(hav[ny][j.second]) tmp++;
        }
        if(tmp == t){
            cout << "success\n";
            return 0;
        }
    }
    cout << "failure\n";
    return 0;
}