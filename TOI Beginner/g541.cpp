#include <iostream>
#include <vector>
#include <cmath>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0)
using namespace std;
typedef long long ll;

string checker(ll x,ll y,ll z){
    for(int i=0;x*i<=z;i++){
        if((z-x*i)%y==0 || x*i==z || z%x==0 || z%y==0){
            return "YES";
        }
    }
    return "NO";
}


int main()
{
    fastio;
    ll n, m, q;
    cin >> n >> m >> q;
    vector<ll> d(q);
    for(int i=0;i<q;i++){
        cin >> d[i];

    }
    for(int i=0;i<q;i++){
        cout << checker(n, m, d[i])<< endl;
    }


    return 0;
}

