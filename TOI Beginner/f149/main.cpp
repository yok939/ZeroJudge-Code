#include <iostream>

using namespace std;

int main()
{
    int R, C, CanDetect=0, CannotDetect=0;
    int Grids[15][15]={0};
    cin >> R >> C;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin >> Grids[i][j];
        }
    }

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            switch(Grids[i][j]){
                case 0:
                    break;
                case 1:
                    break;
                default:
                    for(int m=i-1;m<=i+1;m++){
                        for(int n=j-1;n<=j+1;n++){
                            if(m>=0&&n>=0&&m<R&&n<C&&!(m==i&&n==j)){
                                if(Grids[m][n]>=5){
                                    Grids[m][n]=6;
                                    Grids[i][j]=6;
                                }
                            }
                        }
                    }
                    if(Grids[i][j]==5){
                        for(int m=i-1;m<=i+1;m++){
                            for(int n=j-1;n<=j+1;n++){
                                if(m>=0&&n>=0&&m<R&&n<C){
                                    if(Grids[m][n]==1){
                                        CanDetect++;
                                        Grids[m][n]=0;
                                    }
                                }
                            }
                        }
                    }
                    break;
                }
        }
    }
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            if(Grids[i][j]==1){
                CannotDetect++;
            }
        }
    }

    printf("%i %i", CanDetect, CannotDetect);



    return 0;
}

/*
3 3
0 0 0
0 5 0
0 1 0

5 5
0 0 0 0 0
1 5 1 0 0
0 0 0 5 0
1 5 1 0 0
0 0 0 0 0

10 10
0 1 5 0 0 0 0 0 0 0
5 0 0 0 1 5 0 0 0 0
1 0 0 0 0 0 0 0 5 0
0 0 1 0 0 0 0 5 0 0
0 0 5 0 5 0 1 0 0 0
0 0 0 0 1 0 5 0 0 0
0 1 5 0 5 0 0 0 1 5
0 0 0 1 0 0 0 0 0 0
1 0 0 5 5 1 0 0 0 0
5 0 0 0 0 0 0 1 5 0

15 15
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1



    cout << endl;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout << Grids[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout << Grids_High[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cout << Grids_NeededRemove[i][j] << " ";
        }
        cout << endl;
    }
*/
