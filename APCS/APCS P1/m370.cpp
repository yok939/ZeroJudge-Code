#include <bits/stdc++.h>

using namespace std;

int mousemove(int start, int array[205], int turn, int mode){
    int location=start+100, total=0, last_food=0;
    while(location>=0&&location<=200){
        location+=turn;
        if(array[location]==1){
            total++;
            last_food=location-100; 
        }
    }
    if(mode==1) return total;
    else return last_food;
    
}


int main(){
    int x, n, input=0, food[205];
    cin >> x >> n;
    for(int i=0;i<205;i++){food[i]=0;}
    for(int i=0;i<n;i++){cin >> input; food[input+100]=1;}
    if(mousemove(x, food, 1, 1)>mousemove(x, food, -1, 1)) cout << mousemove(x, food, 1, 1) << ' ' << mousemove(x, food, 1, 2);
    else cout << mousemove(x, food, -1, 1) << ' ' << mousemove(x, food, -1, 2);


}