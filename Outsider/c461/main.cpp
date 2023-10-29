#include <iostream>

using namespace std;


int main()
{
    long long a, b, c, total=0;
    cin >> a >> b >> c;
    if((a&&b)==c){
        cout << "AND\n";
        total++;
    }
    if((a||b)==c){
        cout << "OR\n";
        total++;
    }
    if(((a!=0)^(b!=0))==c){
        cout << "XOR\n";
        total++;
    }
    if(total==0){
        cout<<"IMPOSSIBLE";
    }



}
