#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, w, s, e, total=0;
    cin >> k >> w >> s >> e;
    total+=20;
    if(k>2){
        total+=5*(k-2);
    }
    total+=5*(w/2);
    if(s<=18&&e>=19){
        total+=185;
    }
    if(s<=19&&e>=20){
        total+=195;
    }
    if(s<=20&&e>=21){
        total+=205;
    }
    if(s<=21&&e>=22){
        total+=215;
    }
    if(s<=22&&e>=23){
        total+=225;
    }
    cout << total;

}
