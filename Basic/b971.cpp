#include <iostream>
using namespace std;
int main(){
    int fn, ln, d;
    scanf("%d %d %d", &fn, &ln, &d);
    for(int i=fn;i!=ln+d;i+=d){
        if(i!=fn){
            printf(" %d", i);
        }
        else printf("%d", i);
    }
    return 0;
}