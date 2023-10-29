#include <iostream>

using namespace std;

int main()
{
    float Selection_NUM;
    int temp1=1, NUMmin=0, NUMmax=0;
    int n=-1;
    while(n<0||n>10000){
        cin >> n;
    }
    while(NUMmin+temp1*4<n){
        NUMmin+=temp1*4;
        temp1++;
    }
    NUMmax=NUMmin+temp1*4;
    Selection_NUM=(NUMmax-NUMmin)*1.0;

    if((n-NUMmin)/(Selection_NUM/4)<=4&&(n-NUMmin)/(Selection_NUM/4)>3){
        cout << "Pineapple pen";
    }
    else if((n-NUMmin)/(Selection_NUM/4)<=3&&(n-NUMmin)/(Selection_NUM/4)>2){
        cout << "Apple";
    }
    else if((n-NUMmin)/(Selection_NUM/4)<=2&&(n-NUMmin)/(Selection_NUM/4)>1){
        cout << "Pineapple";
    }
    else if((n-NUMmin)/(Selection_NUM/4)<=1&&(n-NUMmin)/(Selection_NUM/4)>0){
        cout << "Pen";
    }
}
