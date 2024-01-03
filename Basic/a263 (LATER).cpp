#include <bits/stdc++.h>
using namespace std;
int month[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main(){
    int y1, y2, m1, m2, d1, d2;
    while(cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2){
        int total1=0, total2=0;
        int before_y1=y1-1, before_y2=y2-1;
        total1+=366*(before_y1/4-before_y1/100+before_y1/400)+365*(before_y1-(before_y1/4-before_y1/100+before_y1/400));
        total2+=366*(before_y2/4-before_y2/100+before_y2/400)+365*(before_y2-(before_y2/4-before_y2/100+before_y2/400));
        for(int i=0;i<m1-1;i++){
            total1+=month[i];
        }
        for(int i=0;i<m2-1;i++){
            total2+=month[i];
        }  
        total1+=d1;total2+=d2;
        if(y1%4==0&&m1>2&&d1!=29){
            if(y1%100==0){
                if(y1%400==0){
                    total1+=1;
                }
            }
        }
        if(y2%4==0&&m2>2&&d2!=29){
            if(y2%100==0){
                if(y2%400==0){
                    total2+=1;
                }
            }
        }
        cout << abs(total1-total2) << '\n';
    }
    return 0;
}