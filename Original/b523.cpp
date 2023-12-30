#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    string input;
    vector<string> list;
    while(getline(cin, input)){
        if(find(list.begin(), list.end(), input)!=list.end()){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
            list.push_back(input);
        }
    }
    return 0;
}