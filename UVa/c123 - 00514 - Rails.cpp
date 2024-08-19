#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, tmp;
    while(cin >> n && n != 0){
        bool flag = 1;
        while(flag){
            int num = 0;
            vector<int> line(n);
            stack<int> train;
            for(int i = 0; i < n; i++){
                cin >> line[i];
                if(!line[i]){
                    flag = 0;
                    break;
                }
            } 
            if(flag){
                for(int i = 1; i <= n; i++){
                    train.push(i);
                    while(train.size() > 0 && num < n && train.top() == line[num]){
                        train.pop();
                        num++;
                    }
                }
                if(train.size() > 0){
                    cout << "No\n";
                }
                else cout << "Yes\n";
            }
            else cout << '\n';
        }
    }
    return 0;
}
