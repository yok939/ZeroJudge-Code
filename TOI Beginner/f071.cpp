#include <iostream>

using namespace std;

int index(int input, int target){
    if(input==target){
        return 1;
    }

    return 0;
}




int main()
{
    int a, b, c, prize=0;
    bool c_confirm=false;
    int Code[5]={0}, Cash[5]={0};

    scanf("%i %i %i", &a, &b, &c);
    scanf("%i %i %i %i %i", &Code[0], &Code[1], &Code[2], &Code[3], &Code[4]);
    scanf("%i %i %i %i %i", &Cash[0], &Cash[1], &Cash[2], &Cash[3], &Cash[4]);

    for(int i=0;i<5;i++){
        if(index(Code[i], a)==1||index(Code[i], b)==1){
            prize+=Cash[i];
        }
        if(index(Code[i], c)==1){
            c_confirm=true;
            prize-=Cash[i];

        }

    }

    if(c_confirm==false){
            prize*=2;
    }
    if(prize<0){
                prize=0;
    }

    printf("%i", prize);

    return 0;
}
