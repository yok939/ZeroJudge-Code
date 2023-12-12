#include <iostream>

using namespace std;

int main()
{
    int amount, input;
    scanf("%i", &amount);
    for(int i=0;i<amount;i++){
        scanf("%i", &input);
        printf("Case %d: ", i+1);
        if(input%400!=0&&input%100==0){
            printf("%s\n", "a normal year");
        }
        else if(input%400==0&&input%100==0){
            printf("%s\n", "a leap year");
        }
        else if(input%4==0){
            printf("%s\n", "a leap year");
        }
        else{
            printf("%s\n", "a normal year");
        }
    }

    return 0;
}

