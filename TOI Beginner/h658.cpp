#include <bits/stdc++.h>

using namespace std;

float count_distance(int x1,int y1,int x2,int y2){
    return sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
}



int main()
{
    int n;
    float x, y, min_distance=INT_MAX, min_index=-1;
    cin >> x >> y >> n;
    vector<float> xi(n);
    vector<float> yi(n);
    for(int i=0;i<n;i++){
        cin >> xi[i] >> yi[i];
    }
    for(int i=0;i<n;i++){
        if(count_distance(x, y, xi[i], yi[i])<min_distance){
            min_distance=count_distance(x, y, xi[i], yi[i]);
            min_index=i;
        }
    }
    cout << xi[min_index] << ' ' << yi[min_index];


}
