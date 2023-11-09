#include <iostream>

using namespace std;

int main()
{
    int Num[100][100]={0}, row, column, times, temp_col, temp_row;
    cin >> row >> column >> times;
    for(int i=0;i<times;i++){
        for(int i=0;i<row;i++){
            temp_col=0, temp_row=0;
            temp_row++;
            for(int j=0;j<column;j++){
                temp_col++;
                cin >> Num[i][j];
            }
        }
        for(int i=0;i<temp_row;i++){
            for(int j=0;j<temp_col;j++){
                cout << Num[j][i]<< " \n"[j == row-1];
            }
        }
    }
}
