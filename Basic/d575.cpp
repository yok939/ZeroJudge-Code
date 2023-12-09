#include <iostream>

using namespace std;

long long gap(long long num1, long long num2)
{
    return num1 > num2 ? num1 - num2 : num2 - num1;
}

int main(){
    long long a, b, c, d, e;
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &e)==5){
        puts(gap(a, c) + gap(b, d) > e ? "alive" : "die");
    }
    return 0;
}