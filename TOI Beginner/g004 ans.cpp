#include<bits/stdc++.h>

using namespace std;
typedef vector<int> vi;


int main()
{
    int r, c, i, j, k, n, s;
    cin >> r >> c;
    vector<vi> g(r,vi(c));
    for(vi &gi : g){
        for(int &gij : gi){
            cin >> gij;
        }
    }


    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(g[i][j]){
                cout << g[i][j] << ' ';
            }
            else{
                vector<vi> d{{i-1,j},{i+1,j},{i,j-1},{i,j+1}};
                s=n=0;
                for(k=0;k<4;k++){
                    if(d[k][0]>=0&&d[k][0]<r&&
                       d[k][1]>=0&&d[k][1]<c&&
                       g[d[k][0]][d[k][1]])
                            s+=g[d[k][0]][d[k][1]], n++;
                }
                cout<<(n?s/n:0)<<' ';
            }

        }
        cout<<endl;
    }
}
