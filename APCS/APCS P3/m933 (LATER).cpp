#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int p, q, r, m, temp=0, temp_delay=0, delay=INT_MIN;
    cin >> p >> q >> r >> m;
    vector<long long> width(2);
    vector<vector<long long>> input_di(p+q+r, width);
    vector<long long> output_result(p+q+r);

    for(int i=0;i<p+q+r;i++){
        input_di[i][0]=i;
        output_result[i]=-100;
    }
//input
    for(int i=0;i<p;i++){
        cin >> input_di[i][1];
        output_result[i]=input_di[i][1];
    }
    for(int i=p;i<p+q;i++){
        cin >> input_di[i][1];
        input_di[i][1]*=-1;
    }
    for(int i=p+q;i<p+q+r;i++){
        input_di[i][1]=-99;
    }
//
    for(int i=0;i<m;i++){
        int a, b;
        cin >> a >> b;
        input_di[b-1].push_back(a-1);
    }
    while(find(output_result.begin(), output_result.end()-r, -100)!=output_result.end()-r){
        for(int i=p;i<p+q;i++){
            if(input_di[i][1]==-1&&output_result[input_di[i][2]]!=-100&&output_result[input_di[i][3]]!=-100){
                if(output_result[input_di[i][2]]&&output_result[input_di[i][3]]){
                    output_result[i]=1;
                }
                else{
                    output_result[i]=0;
                }
            }
            else if(input_di[i][1]==-2&&output_result[input_di[i][2]]!=-100&&output_result[input_di[i][3]]!=-100){
                if(output_result[input_di[i][2]]||output_result[input_di[i][3]]){
                    output_result[i]=1;
                }
                else{
                    output_result[i]=0;
                }
            }
            else if(input_di[i][1]==-3&&output_result[input_di[i][2]]!=-100&&output_result[input_di[i][3]]!=-100){
                if(!(output_result[input_di[i][2]]==output_result[input_di[i][3]])){
                    output_result[i]=1;
                }
                else{
                    output_result[i]=0;
                }
            }
            else if(input_di[i][1]==-4&&output_result[input_di[i][2]]!=-100){
                if(output_result[input_di[i][2]]==0){
                    output_result[i]=1;
                }
                else{
                    output_result[i]=0;
                }
            }
        }
    }
    for(int i=p+q;i<p+q+r;i++){
        for(int j=2;j<input_di[i].size();j++){
            if(output_result[input_di[i][j]]==1){
                output_result[i]=1;
            }
            else{
                output_result[i]=0;
            }
        }
    }

//NEEDED TO REPLACE WITH DPS
    for(int i=0;i<p;i++){
        temp=i, temp_delay=0;
        for(int j=0;j<input_di[i].size();j++){
            if(temp<p+q){
                temp_delay++;
                temp=input_di[i][j];
            }
            if(temp_delay>delay){
                delay=temp_delay;
            }
        }
    }
//

    cout << delay+1 << '\n';
    for(int i=p+q;i<p+q+r;i++){
        cout << output_result[i] << ' ';
    }
}