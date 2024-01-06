#include <bits/stdc++.h>

using namespace std;

int main(){
    int t=-1, base_x, base_y, x, y;
    while(scanf("%d", &t)!=EOF&&t!=0){
        scanf("%d %d", &base_x, &base_y);
        for(int i=0;i<t;i++){
            scanf("%d %d", &x, &y);
            if(x==base_x||y==base_y){
                printf("divisa\n");
                continue;
            }
            if(base_y-y>0){
                printf("S");
            }
            else{
                printf("N");
            }
            if(base_x-x>0){
                printf("O\n");
            }
            else{
                printf("E\n");
            }
        }
    }
    return 0;
}