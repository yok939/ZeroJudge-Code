#include <iostream>
#include <string>

using namespace std;

int Index(char In_char, char *list)
{
    int i;
    for(i = 0; i <= 25; i++){
        if(In_char == list[i]){
            return i;
        }

    }

    return -1;
}

int main()
{
    char Alphabet_[26] = {'A', 'B', 'C', 'D', 'E'
                        , 'F', 'G', 'H', 'I', 'J'
                        , 'K', 'L', 'M', 'N', 'O'
                        , 'P', 'Q', 'R', 'S', 'T'
                        , 'U', 'V', 'W', 'X', 'Y'
                        , 'Z'};
    int First_Digit_[26] = {1, 1, 1, 1, 1
                        , 1, 1, 1, 3, 1
                        , 1, 2, 2, 2, 3
                        , 2, 2, 2, 2, 2
                        , 2, 2, 3, 3, 3
                        , 3};
    int Second_Digit_[26] = {0, 1, 2, 3, 4
                        , 5, 6, 7, 4, 8
                        , 9, 0, 1, 2, 5
                        , 3, 4, 5, 6, 7
                        , 8, 9, 2, 0, 1
                        , 3};
    int foo1 = 8, foo2 = 1, IdentifyNum = 0;
    string Input_ID;


    cin >> Input_ID;
    if(Index(Input_ID[0], Alphabet_) == -1){
        return 0;
    }

    IdentifyNum += First_Digit_[Index(Input_ID[0], Alphabet_)]; IdentifyNum += Second_Digit_[Index(Input_ID[0], Alphabet_)] * 9;
    while(foo2 <= 9){
        if(foo1 == 0){
            foo1 = 1;
        }
        IdentifyNum += (int(Input_ID[foo2]) - 48) * foo1;
        foo1--; //81 72 63 54 45 36 27 18 09
        foo2++;
    }
    if(IdentifyNum % 10 == 0){
        cout << "real";
    }
    else{
        cout << "fake";
    }
    return 0;
}
