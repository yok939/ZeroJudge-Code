#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, x, y;
    char c;
    string s;
    bool outofline=0;
    cin >> n >> m;
    vector<char> width(n);
    vector<vector<char>> graph(n, width);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            graph[i][j]=' ';
        }
    }



    for(int i=0;i<m;i++){
        cin >> c >> s >> x >> y;
        if(c=='V'){
            int temp=0;
            for(auto c_1:s){
                if(c_1==graph[y+temp][x]||graph[y+temp][x]==' '){
                    graph[y+temp][x]=c_1;
                }
                else{
                    graph[y+temp][x]='#';
                }
                temp++;
                if(y+temp>=n){
                    outofline=1;
                    break;
                }
            }
        }
        if(c=='H'){
            int temp=0;
            for(auto c_1:s){
                if(c_1==graph[y+temp][x]||graph[y][x+temp]==' '){
                    graph[y][x+temp]=c_1;
                }
                else{
                    graph[y][x+temp]='#';
                }
                temp++;
                if(x+temp>=n){
                    outofline=1;
                    break;
                }
            }
        }
    }
    if(outofline){
        cout << "No";
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(graph[i][j]=='#'){
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";
    return 0;

}
