#include <iostream>

using namespace std;

int main()
{
    long long a1=0, a2=0, b1=0, b2=0;
    bool win1=false, win2=false;
    for(int i=0, j;i<4;i++){
        cin >> j; a1+=j;
    }
    for(int i=0, j;i<4;i++){
        cin >> j; b1+=j;
    }
    for(int i=0, j;i<4;i++){
        cin >> j; a2+=j;
    }
    for(int i=0, j;i<4;i++){
        cin >> j; b2+=j;
    }

    printf("%d:%d\n", a1, b1);
    printf("%d:%d\n", a2, b2);
    win1=(a1>b1)?true:false;
    win2=(a2>b2)?true:false;
    if(win1==win2&&win1==true){
        cout << "Win";
    }
    else if(win1==win2&&win1==false){
        cout << "Lose";
    }
    else if(win1!=win2){
        cout << "Tie";
    }
    return 0;
}
