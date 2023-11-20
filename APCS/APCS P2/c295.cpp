#include <iostream>
#include <vector>


using namespace std;

int main()
{
    long long n, m, addup=0, havenum[400];
    bool out=false;
    cin >> n >> m;
    vector<long long> xi(m);
    vector<vector<long long>> di(n, xi);
    vector<long long> select(n);
    for(int i=0;i<n;i++){
        select[i]=0;
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> di[i][j];
        }
    }

    for(int i=0, big=0;i<n;i++){
        big=di[i][0];
        for(int j=0;j<m;j++){
            if(di[i][j]>big){
                big=di[i][j];
            }
        }
        select[i]=big;
        addup+=big;

    }
    cout << addup << endl;
    for(int i=0;i<n;i++){
        if(addup%select[i]==0){
            if(out){
                cout << ' ' << select[i];
            }
            else{
                cout << select[i];
            }
            out=true;
        }

    }
    if(out!=true){
        cout << -1;
    }


}
