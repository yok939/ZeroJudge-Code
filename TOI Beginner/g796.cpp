#include <iostream>
#include <vector>

typedef long long ll;
using namespace std;

int main()
{
    ll n, a[100];
    cin >> n;
    vector<string> s(n);
    for(int i=0;i<100;i++){
        a[i]=0;
    }
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    for(int i=0;i<n;i++){
        a[(int(s[i][3])-48)*10+(int(s[i][4])-48)]++;
    }
    for(int i=0;i<100;i++){
        if(a[i]>0){
            cout << i << ' ' << a[i]<<endl;
        }
    }

}
