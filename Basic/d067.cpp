#include <iostream>

using namespace std;

int main()
{
    int input;
    scanf("%i", &input);
    if(input%400!=0&&input%100==0){
        printf("%s", "a normal year");
    }
    else if(input%400==0&&input%100==0){
        printf("%s", "a leap year");
    }
    else if(input%4==0){
        printf("%s", "a leap year");
    }
    else{
        printf("%s", "a normal year");
    }
    return 0;
}