#include <bits/stdc++.h>

using namespace std;

int main(){
    string n;
    cin >> n;
    while(n.length()!=1){
        int part1=0, part2=0;
        string temp="";
        switch (n.length()){
        case 4:
            if((int(n[0])-48)!=0)
                part1=(int(n[0])-48)*(int(n[1])-48);
            else part1=(int(n[1])-48);
            if((int(n[2])-48)!=0)
                part2=(int(n[2])-48)*(int(n[3])-48);
            else part2=(int(n[3])-48);
            break;
        case 3:
            part1=(int(n[0])-48)*(int(n[1])-48);part2=(int(n[2])-48)*(int(n[1])-48);
            break;
        case 2:
            part1=0;part2=(int(n[0])-48)*(int(n[1])-48);
            break;
        default:
            break;
        }
        //cout << part1 << ' ' << part2 << endl;
        temp=to_string(part1)+to_string(part2);
        n=temp;
        while(n[0]=='0') n=n.substr(1, n.length()-1);
    }
    cout << n;

}