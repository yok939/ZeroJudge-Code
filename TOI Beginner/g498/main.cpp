#include <iostream>

using namespace std;

int main()
{
    long long n, m, d, i=0, j=0;
    cin >> n >> m >> d;
    for(i, j;n*i+m*j!=d||n*i<=d;i++){
        for(j;n*i+m*j<d;j++);
        if(n*i+m*j==d||n*i>d){
            break;
        }
        else{
            j=0;
        }
    }
    if(n*i+m*j==d){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}
