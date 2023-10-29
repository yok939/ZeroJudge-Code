#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n, m_n=0;
    int maximum=INT_MIN, minimum=INT_MAX;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
    }
    for(int i=0;i<n-1;i++){
        m_n=abs(x[i]-x[i+1])+abs(y[i]-y[i+1]);
        maximum=max(maximum, m_n);
        minimum=min(minimum, m_n);
    }
    printf("%d %d", maximum, minimum);
}
