#include <iostream>

using namespace std;

int main()
{
    int input;
    while(scanf("%i", &input)!=-1){
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