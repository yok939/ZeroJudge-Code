#include <bits/stdc++.h>

using namespace std;

bool ismatch(string target, char map[75][75], int x_start, int y_start, int x_add, int y_add){
    int x=x_start, y=y_start;
    for(int i=0;i<target.length();i++){
        if(map[y][x]==target[i]){
            x+=x_add, y+=y_add;
        }
        else{
            return false;
        }
    }
    return true;
}



int main(){
    int r, c, top_x=0, top_y=0, bottom_x=0, bottom_y=0;
    int possible_top_x[5630], possible_top_y[5630], possible_bottom_x[5630], possible_bottom_y[5630], total=0, same=1, min=INT_MAX, min_i;
    string s;
    char map[75][75];
    cin >> r >> c;
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)cin >> map[i][j];
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)if(map[i][j]>=65&&map[i][j]<=90)map[i][j]=map[i][j]-'A'+'a';
    cin >> s;
    for(int i=0;i<s.length();i++)if(s[i]>=65&&s[i]<=90)s[i]=s[i]-'A'+'a';
    // left to right, right to left
    for(int i=0;i<r;i++){
        for(int j=0;j<c-s.length()+1;j++){
            top_x=j, top_y=i, bottom_x=s.length()-1+j, bottom_y=i;
            if(ismatch(s, map, top_x, top_y, 1, 0)){
                possible_top_x[total]=top_x, possible_top_y[total]=top_y, possible_bottom_x[total]=bottom_x, possible_bottom_y[total]=bottom_y;
                total++;
            }
            if(ismatch(s, map, bottom_x, bottom_y, -1, 0)){
                possible_top_x[total]=bottom_x, possible_top_y[total]=bottom_y, possible_bottom_x[total]=top_x, possible_bottom_y[total]=top_y;
                total++;
            }
        }
    }
    // top to bottom, bottom to top
    for(int i=0;i<r-s.length()+1;i++){
        for(int j=0;j<c;j++){
            top_x=j, top_y=i, bottom_x=j, bottom_y=s.length()-1+i;
            if(ismatch(s, map, top_x, top_y, 0, 1)){
                possible_top_x[total]=top_x, possible_top_y[total]=top_y, possible_bottom_x[total]=bottom_x, possible_bottom_y[total]=bottom_y;
                total++;
            }
            if(ismatch(s, map, bottom_x, bottom_y, 0, -1)){
                possible_top_x[total]=bottom_x, possible_top_y[total]=bottom_y, possible_bottom_x[total]=top_x, possible_bottom_y[total]=top_y;
                total++;
            }
        }
    }
    // top left to bottom right, bottom right to top left
    for(int i=0;i<r-s.length()+1;i++){
        for(int j=0;j<c-s.length()+1;j++){
            top_x=j, top_y=i, bottom_x=s.length()-1+j, bottom_y=s.length()-1+i;
            if(ismatch(s, map, top_x, top_y, 1, -1)){
                possible_top_x[total]=top_x, possible_top_y[total]=top_y, possible_bottom_x[total]=bottom_x, possible_bottom_y[total]=bottom_y;
                total++;
            }
            if(ismatch(s, map, bottom_x, bottom_y, -1, 1)){
                possible_top_x[total]=bottom_x, possible_top_y[total]=bottom_y, possible_bottom_x[total]=top_x, possible_bottom_y[total]=top_y;
                total++;
            }
        }
    }
    // top right to bottom left, bottom left to top right
    for(int i=0;i<r-s.length()+1;i++){
        for(int j=0;j<c-s.length()+1;j++){
            top_x=s.length()-1+j, top_y=s.length()-1+i, bottom_x=j, bottom_y=i;
            if(ismatch(s, map, top_x, top_y, -1, -1)){
                possible_top_x[total]=top_x, possible_top_y[total]=top_y, possible_bottom_x[total]=bottom_x, possible_bottom_y[total]=bottom_y;
                total++;
            }
            if(ismatch(s, map, bottom_x, bottom_y, 1, 1)){
                possible_top_x[total]=bottom_x, possible_top_y[total]=bottom_y, possible_bottom_x[total]=top_x, possible_bottom_y[total]=top_y;
                total++;
            }
        }
    }
    //1
    int checking=possible_top_y[0];same=1;min=INT_MAX;min_i=0;
    for(int i=0;i<total;i++){
        if(possible_top_y[i]<min){
            min=possible_top_y[i];
            min_i=i;
        }
        if(possible_top_y[i]==checking){
            same++;
        }
    }
    //2
    if(same==total){
        int checking=possible_top_x[0];same=1;min=INT_MAX;min_i=0;
        for(int i=0;i<total;i++){
            if(possible_top_x[i]<min){
                min=possible_top_x[i];
                min_i=i;
            }
            if(possible_top_x[i]==checking){
                same++;
            }
        }
    }
    else{
        printf("%d %d\n%d %d", possible_top_y[min_i]+1, possible_top_x[min_i]+1, possible_bottom_y[min_i]+1, possible_bottom_x[min_i]+1);
        return 0;
    }
    //3
    if(same==total){
        int checking=possible_bottom_y[0];same=1;min=INT_MAX;min_i=0;
        for(int i=0;i<total;i++){
            if(possible_bottom_y[i]<min){
                min=possible_bottom_x[i];
                min_i=i;
            }
            if(possible_bottom_y[i]==checking){
                same++;
            }
        }
    }
    else{
        printf("%d %d\n%d %d", possible_top_y[min_i]+1, possible_top_x[min_i]+1, possible_bottom_y[min_i]+1, possible_bottom_x[min_i]+1);
        return 0;
    }
    if(same==total){
        int checking=possible_bottom_x[0];same=1;min=INT_MAX;min_i=0;
        for(int i=0;i<total;i++){
            if(possible_bottom_x[i]<min){
                min=possible_top_x[i];
                min_i=i;
            }
            if(possible_bottom_x[i]==checking){
                same++;
            }
        }
    }
    else{
        printf("%d %d\n%d %d", possible_top_y[min_i]+1, possible_top_x[min_i]+1, possible_bottom_y[min_i]+1, possible_bottom_x[min_i]+1);
        return 0;
    }
    if(same!=total){
        printf("%d %d\n%d %d", possible_top_y[min_i]+1, possible_top_x[min_i]+1, possible_bottom_y[min_i]+1, possible_bottom_x[min_i]+1);
        return 0;
    }
    else{
        printf("%d %d\n%d %d", possible_top_y[0]+1, possible_top_x[0]+1, possible_bottom_y[0]+1, possible_bottom_x[0]+1);
        return 0;
    }
    cout << "NO";
    return 0;

}