#include <iostream>

using namespace std;

int main()
{
    int QuestionAmount, i=0, Score=0;
    cin >> QuestionAmount;
    while(i <= QuestionAmount){
        if(i>=1&&i<=10){
            Score+=6;
        }
        else if(i>=11&&i<=20){
            Score+=2;
        }
        else if(i>=21&&i<=40){
            Score+=1;
        }
        else if(i>=40){
            Score=100;
        }
        i++;
    }
    cout << Score;
}
