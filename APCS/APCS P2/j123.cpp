#include <bits/stdc++.h>

using namespace std;

int main(){
    int r, c, n, empty_space=0, got_push=0;
    cin >> r >> c >> n;
    vector<int> width(c, 0);
    vector<vector<int>> room(r, width);
    while(n--){
        char t;
        int y, final_x=INT_MIN;
        cin >> t >> y;
        if(t=='A'){
            vector<int> every_x(4, c);
            while(every_x[0]>0&&room[y][every_x[0]-1]!=1&&room[y+1][every_x[1]-1]!=1&&room[y+2][every_x[2]-1]!=1&&room[y+3][every_x[3]-1]!=1){
                every_x[0]--;
                every_x[1]--;
                every_x[2]--;
                every_x[3]--;
            }
            if(every_x[0]==c){
                got_push++;
                continue;
            }
            for(int i=0;i<4;i++){
                room[y+i][every_x[0]]=1;
            }
        }
        if(t=='B'){
            vector<int> every_x(3, c); every_x[1]=c+1, every_x[2]=c+2;
            while(every_x[0]>0&&room[y][every_x[0]-1]!=1){
                every_x[0]--;
                every_x[1]--;
                every_x[2]--;
            }
            if(every_x[0]>c-3){
                got_push++;
                continue;
            }
            for(int i=0;i<3;i++){
                room[y][every_x[i]]=1;
            }
        }
        if(t=='C'){
            vector<int> every_x(4, c); every_x[1]=c+1, every_x[3]=c+1;
            while(every_x[0]>0&&room[y][every_x[0]-1]!=1&&room[y+1][every_x[2]-1]!=1){
                every_x[0]--;
                every_x[1]--;
                every_x[2]--;
                every_x[3]--;
            }
            if(every_x[0]>c-2||every_x[2]>c-2){
                got_push++;
                continue;
            }
            room[y][every_x[0]]=1;
            room[y][every_x[1]]=1;
            room[y+1][every_x[2]]=1;
            room[y+1][every_x[3]]=1;
        }
        if(t=='D'){
            vector<int> every_x(4, c); every_x[0]=c+2, every_x[2]=c+1, every_x[3]=c+2;
            while(every_x[1]>0&&room[y][every_x[0]-1]!=1&&room[y+1][every_x[1]-1]!=1){
                every_x[0]--;
                every_x[1]--;
                every_x[2]--;
                every_x[3]--;
            }
            if(every_x[1]>c-3){
                got_push++;
                continue;
            }
            room[y][every_x[0]]=1;
            room[y+1][every_x[1]]=1;
            room[y+1][every_x[2]]=1;
            room[y+1][every_x[3]]=1;
        }
        if(t=='E'){
            vector<int> every_x(5, c); every_x[0]=c+1, every_x[2]=c+1, every_x[4]=c+1;
            while(every_x[1]>0&&room[y][every_x[0]-1]!=1&&room[y+1][every_x[1]-1]!=1&&room[y+2][every_x[3]-1]!=1){
                every_x[0]--;
                every_x[1]--;
                every_x[2]--;
                every_x[3]--;
                every_x[4]--;
            }
            if(every_x[1]>c-2){
                got_push++;
                continue;
            }
            room[y][every_x[0]]=1;
            room[y+1][every_x[1]]=1;
            room[y+1][every_x[2]]=1;
            room[y+2][every_x[3]]=1;
            room[y+2][every_x[4]]=1;
        }
        /*Debug tool
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout << room[i][j];
            }
            cout << '\n';
        } 
        */
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(!room[i][j]){
                empty_space++;
            }
        }
    }
    cout << empty_space << ' ' << got_push;
}

/*
5 6 9
B 2
A 1
B 1
A 0
B 5
A 0
B 1
B 2 
B 3

*/