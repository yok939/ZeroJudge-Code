#include <iostream>

using namespace std;

int main()
{
    long long n, n_height[2000], n_weight[2000], n_result[2000], small_i=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> n_height[i];
    }
    for(int i=0;i<n;i++){
        cin >> n_weight[i];
    }
    for(int i=0;i<n;i++){
        if(n_height[i]*n_weight[i]<n_height[small_i]*n_weight[small_i]){
            small_i=i;
        }
    }
    cout << n_height[small_i] << " "<< n_weight[small_i];

}
