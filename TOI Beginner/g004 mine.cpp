#include <iostream>
#include <vector>

using namespace std;
typedef vector<int> vi;


int main()
{
    int R, C, s, t;
    cin >> R >> C;
    vector<vi> grids(R, vi(C));
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin >> grids[i][j];
        }
    }
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            s=0,t=0;
            if(grids[i][j]){
                cout << grids[i][j] << ' ';
            }
            else{
                if(i-1>=0&&grids[i-1][j]){
                    t+=grids[i-1][j];
                    s+=1;
                }
                if(i+1<R&&grids[i+1][j]){
                    t+=grids[i+1][j];
                    s+=1;
                }
                if(j-1>=0&&grids[i][j-1]){
                    t+=grids[i][j-1];
                    s+=1;
                }
                if(j+1<C&&grids[i][j+1]){
                    t+=grids[i][j+1];
                    s+=1;
                }
                cout << (s?t/s:0) << ' ';
            }
        }
    cout << endl;
    }
}
