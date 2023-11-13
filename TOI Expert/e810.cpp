#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, p0, p1, w, a, b;
    cin >> n >> m;
    vector<int> graph_x(n);
    vector<vector<int>> graph(n, graph_x);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            graph[i][j]=(i==j)?0:INT_MAX;
        }
    }
    while(m--){
        cin >> p0 >> p1 >> w;
        graph[p0][p1]=w;
        graph[p0][p1]=min(graph[p0][p1],w);
        graph[p1][p0]=graph[p0][p1];
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                graph[i][j]=min(graph[i][j],max(graph[k][j],graph[i][k]));
            }
        }
    }
    cin >> a >> b;
    if(graph[a][b]==INT_MAX){
        cout << -1;
        return 0;
    }
    cout << graph[a][b];
    return 0;

}

/*
Print out whole graph
for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << graph[i][j] << ' ';
        }
        cout << '\n';
    }
*/
