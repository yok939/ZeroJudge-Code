#include <iostream>

using namespace std;

int main()
{
    long long m, n, m_a, n_a, m_total=0, n_total=0;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        cin>>m_a;
        m_total+=m_a;
    }
    for(int i=0;i<n;i++){
        cin>>n_a;
        n_total+=n_a;
    }
    if(m_total>n_total&&m>n){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
