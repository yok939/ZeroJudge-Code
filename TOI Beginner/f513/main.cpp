#include <iostream>

using namespace std;

int main()
{
    long long R, C, map[100][100]={0}, total=0;
    bool overlap=false;
    cin >> R >> C;
    for(int j=0;j<R;j++){
        for(int i=0;i<C;i++){
            cin >> map[j][i];
        }
    }
    for(int j=0;j<R;j++){
        for(int i=0;i<C;i++){
            overlap=false;
            for(int m=j-1;m<=j+1;m++){
                for(int n=i-1;n<=i+1;n++){
                    if(m>=0&&m<R&&n>=0&&n<C&&!(m==j&&n==i)){
                        if(map[j][i]==1){
                            if(map[m][n]==1){
                                overlap=true;
                            }
                        }
                        else if(map[j][i]==2){
                            if(map[m][n]==2){
                                overlap=true;
                            }
                        }
                    }
                }
            }
            if(overlap==false){
                total++;
            }
        }
    }
    cout << total;
    return 0;
}
