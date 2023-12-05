#include <bits/stdc++.h> 

using namespace std;

int main(){
    int n, input, temp0=0, temp1=0, temp2=0, digit_repeat=0, already_repeat=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> input;
        temp1=input, temp2=0, digit_repeat=0;
        while(1){
            temp2=0;
            already_repeat=0;
            while(temp1!=0){
                already_repeat++;
                temp2+=(temp1%10)*(temp1%10);
                temp1/=10;
            }
            if(already_repeat==1) digit_repeat++;
            temp1=temp2;
            if(temp1==1){
                printf("Case #%d: %d is a Happy number.\n", i+1, input);
                break;
            }
            else if(temp1==input||digit_repeat==5){
                printf("Case #%d: %d is an Unhappy number.\n", i+1, input);
                break;
            }
        }
        
    }

}