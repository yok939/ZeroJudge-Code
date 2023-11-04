<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
string sortString(string &str)
{
   sort(str.begin(), str.end());
   return str;
}
int main()
{
    int n, counter=0, minimum=INT_MAX, minimum_index=-1, par1=0, par2=0;
    char differ='0';
    string temp1, temp2;
    cin >> n;
    vector<pair<string,int>> string_input;
    for(int i=0;i<n;i++){
        counter=0;
        cin >> temp1;
        temp2=temp1;
        sortString(temp1);
        for(int j=0;j<temp1.length();j++){
            if(temp1[j]!=differ){
                counter++;
                differ=temp1[j];
            }
        }
        string_input.push_back(make_pair(temp2,counter));
    }
    for(int i=0;i<n;i++){
        if(minimum>string_input[i].second){
            minimum_index=i;
            minimum=string_input[i].second;
        }
        else if(minimum==string_input[i].second&&string_input[i].first[0]!=string_input[minimum_index].first[0]){
            par1=int(string_input[minimum_index].first[0]);
            par2=int(string_input[i].first[0]);
            if(par1>par2){
                minimum_index=i;
                minimum=string_input[i].second;
            }
        }
        else if(minimum==string_input[i].second&&string_input[i].first[0]==string_input[minimum_index].first[0]){
            par1=0, par2=0;
            for(int j=0;j<string_input[minimum_index].first.length();j++){
                par1+=int(string_input[minimum_index].first[j]);
            }
            for(int j=0;j<string_input[i].first.length();j++){
                par2+=int(string_input[i].first[j]);
            }
            if(par1<par2){
                minimum_index=i;
                minimum=string_input[i].second;
            }
        }
    }
    cout << string_input[minimum_index].first;
}


//97 122
//65 90
