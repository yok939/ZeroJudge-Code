#include <bits/stdc++.h>
using namespace std;

int n, num;
char arr[30];
void dfs(int now, int left, int right){
    if(left>n||right>left) return;
    if(now==num){
        arr[num]='\0';
        cout << arr << '\n';
        return;
    }
    arr[now]='(';
    dfs(now+1, left+1, right);
    arr[now]=')'; 
    dfs(now+1, left, right+1);
}

int main(){
    while(cin >> n){
        num=n*2;
        dfs(0, 0, 0);
    }
}