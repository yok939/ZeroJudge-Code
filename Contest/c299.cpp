#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, a, b;
    cin >> n;
    vector<int> list(n);
    for(int i=0;i<n;i++){
        cin >> list[i];
    }
    sort(list.begin(), list.end());
    int min = *min_element(list.begin(), list.end());
    int max = *max_element(list.begin(), list.end());
    printf("%d %d ", min, max);
    for(int i=0;i<n-1;i++){
        if(list[i+1]-list[i]!=1){
            printf("no");
            return 0;
        }
    }
    printf("yes");
    return 0;
}
