#include <bits/stdc++.h>

using namespace std;

int checker(){
    int x, y, z;
    char token[7];
    scanf("%s", token);
    if(token[0]=='f'){
        x=checker();
        return 2*x - 3;
    }
    else if(token[0]=='g'){
        x = checker();
        y = checker();
        return 2*x+y-7;
    }
    else if(token[0]=='h'){
        x = checker();
        y = checker();
        z = checker();
        return 3*x - 2*y + z;
    }
    else{
        return atoi(token);
    }
}


int main(){
    ios::sync_with_stdio(0);cin.tie();
    printf("%d\n", checker());
    return 0;
}