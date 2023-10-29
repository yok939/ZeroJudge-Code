#include <iostream>

using namespace std;

int main()
{
    int input=-1;
    while(input!=0){
        cin >> input;
        for(int i=1;i<input;i++){
            if(i%7!=0){
                cout << i << " ";
            }
        }
        cout << endl;
    }
}
