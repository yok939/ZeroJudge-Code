#include <iostream>

using namespace std;



int main()
{
    int W, H, N, N_X[26]={0},N_Y[26]={0}, N_Now=0;
    char Grids[100]={'0'};
    int A_int[26]={0,1,2,3,4
                  ,5,6,7,8,9
                  ,10,11,12,13
                  ,14,15,16,17
                  ,18,19,20,21
                  ,22,23,24,25};
    char A_char[26]={'a','b','c','d','e'
                    ,'f','g','h','i','j'
                    ,'k','l','m','n','o'
                    ,'p','q','r','s','t'
                    ,'u','v','w','x','y'
                    ,'z'};

    cin >> W >> H >> N;
    for(int i=0;i<W;i++){
        for(int j=0;j<H;j++){
            cin >> Grids[j+i*10];
        }
    }

    for(int i=0;i<26;i++){
        for(int j=0;j<100;j++){
            if(Grids[j]==A_char[i]){
                N_Y[N_Now]=j/10;
                N_X[N_Now]=j%10;
                N_Now++;
                break;
            }
        }
    }


    if(N_Now>=N){
        for(int i=0;i<N;i++)
            cout << N_Y[i] << " " << N_X[i] << endl;
    }
    else{
        cout << "Mission fail.";
    }
    return 0;
}


/*
5 5
5
0 0 a 0 0
0 b 0 0 0
c 0 0 0 0
0 d 0 0 0
0 0 e 0 0

2 2
4
g e
f d

4 4
5
z 0 0 0
c 0 0 0
a 0 0 0
g 0 0 0



*/
