#include <bits/stdc++.h>

using namespace std;

int portal[100005];

int main(){
    int k, largest=INT_MIN;
    cin >> k;
    memset(portal, 0, 100005);
    for(int i=0;i<k;i++){
        cin >> portal[i];
    }
    for(int i=0;i<k;i++){
        int counter=0, next=0;
        if(portal[i]!=0){
            counter=0, next=portal[i]-1;
            while(portal[next]!=0){
                int prenext=next;
                counter++;
                next=portal[next]-1;
                portal[prenext]=0;
            }

        }

        largest=max(counter, largest);

    }
    cout << largest;
    return 0;

}
