#include <iostream>

using namespace std;

int main()
{
    string FoodSingle[4]={"German Fries","Durian Slices","WcFurry","Chocolate Sunday"}, FoodMeal[5]={"Medium Wac","WChicken Nugget","Geez Burger","ButtMilk Crispy Chicken","Plastic Toy"};
    int C_FoodSingle[4]={2,3,5,7}, C_FoodMeal[5]={4,8,7,6,3}, TotalCost=0, input=-1, selectmode=0;

    while(input!=0){
        cin >> input;
        if(input==1&&selectmode==0){
            selectmode=1;
        }
        else if(input==2&&selectmode==0){
            selectmode=2;
        }
        else if(selectmode==2){
            cout << FoodSingle[input-1] << " " << C_FoodSingle[input-1] << endl;
            TotalCost+=C_FoodSingle[input-1];
            selectmode=0;
        }
        else if(selectmode==1){
            cout << FoodMeal[input-1] << " " << C_FoodMeal[input-1] << endl;
            TotalCost+=C_FoodMeal[input-1];
            selectmode=0;
        }
    }
    printf("Total: %i", TotalCost);
    return 0;
}


            //cout << FoodMeal[input-1] << " " << C_FoodMeal[input-1] << endl; //OUT Medium Wac 4
            //printf("%s %i\n", FoodMeal[input-1], C_FoodMeal[input-1]);       //OUT þa 4
