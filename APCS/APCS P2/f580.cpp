#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, i_1, i_2;
    cin >> n >> m;
    vector<int> length(4);
    vector<vector<int>> dice(3, length);
    vector<vector<vector<int>>> dice_list(n, dice);
    for(int i=0;i<n;i++){
        dice_list[i][0][1]=3;dice_list[i][1][0]=5;dice_list[i][1][1]=1;
        dice_list[i][1][2]=2;dice_list[i][1][3]=6;dice_list[i][2][1]=4;
    }

    while(m--){
        cin >> i_1 >> i_2;
        if(i_2==-2){
            int temp0=dice_list[i_1-1][1][0],
                temp1=dice_list[i_1-1][1][1],
                temp2=dice_list[i_1-1][1][2],
                temp3=dice_list[i_1-1][1][3];
            dice_list[i_1-1][1][0]=temp3;
            dice_list[i_1-1][1][1]=temp0;
            dice_list[i_1-1][1][2]=temp1;
            dice_list[i_1-1][1][3]=temp2;
        }
        else if(i_2==-1){
            int temp0=dice_list[i_1-1][0][1],
                temp1=dice_list[i_1-1][1][1],
                temp2=dice_list[i_1-1][2][1],
                temp3=dice_list[i_1-1][1][3];
            dice_list[i_1-1][0][1]=temp3;
            dice_list[i_1-1][1][1]=temp0;
            dice_list[i_1-1][2][1]=temp1;
            dice_list[i_1-1][1][3]=temp2;
        }
        else{
            int temp0=dice_list[i_1-1][1][0],
                temp1=dice_list[i_1-1][1][1],
                temp2=dice_list[i_1-1][1][2],
                temp3=dice_list[i_1-1][1][3],
                temp4=dice_list[i_1-1][0][1],
                temp5=dice_list[i_1-1][2][1];
            dice_list[i_1-1][1][0]=dice_list[i_2-1][1][0];
            dice_list[i_1-1][1][1]=dice_list[i_2-1][1][1];
            dice_list[i_1-1][1][2]=dice_list[i_2-1][1][2];
            dice_list[i_1-1][1][3]=dice_list[i_2-1][1][3];
            dice_list[i_1-1][0][1]=dice_list[i_2-1][0][1];
            dice_list[i_1-1][2][1]=dice_list[i_2-1][2][1];
//
            dice_list[i_2-1][1][0]=temp0;
            dice_list[i_2-1][1][1]=temp1;
            dice_list[i_2-1][1][2]=temp2;
            dice_list[i_2-1][1][3]=temp3;
            dice_list[i_2-1][0][1]=temp4;
            dice_list[i_2-1][2][1]=temp5;
        }
    }
    for(int i=0;i<n;i++){
        cout << dice_list[i][1][1] << ' ';

    }
    return 0;


}

