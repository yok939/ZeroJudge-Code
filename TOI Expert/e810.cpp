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
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << graph[i][j] << ' ';
        }
        cout << '\n';
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d %d %d\n", i, j, k);
                if(graph[i][j]>graph[i][k]+graph[k][j]&&graph[k][j]!=INT_MAX&&graph[i][k]!=INT_MAX){
                    graph[i][j]=graph[i][k]+graph[k][j];
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << graph[i][j] << ' ';
        }
        cout << '\n';
    }
    
}

/*
for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << graph[i][j] << ' ';
        }
        cout << '\n';
    }
*/