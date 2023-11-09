#include <iostream>

using namespace std;

int main()
{
    int N=-1, M=-1, K, CostNow=0, TimeNow=0;
    cin >> N >> M >> K;
    if(K==0){
        CostNow=32;
        if(N-CostNow<0){
            cout << "Wayne can't eat and drink.";
        }
        else{
            while(N-CostNow>=0){
                N-=CostNow;
                if(CostNow==32){
                    if(N>1){
                        printf("%i: Wayne eats an Apple pie, and now he has %i dollars.\n",TimeNow , N);
                    }
                    else if(N==1){
                        printf("%i: Wayne eats an Apple pie, and now he has %i dollar.\n",TimeNow , N);
                    }
                    else if(N==0){
                        printf("%i: Wayne eats an Apple pie, and now he doesn't have money.\n",TimeNow);
                    }

                    TimeNow+=M;
                    CostNow=55;
                }
                else if(CostNow==55){

                    if(N>1){
                        printf("%i: Wayne drinks a Corn soup, and now he has %i dollars.\n",TimeNow , N);
                    }
                    else if(N==1){
                        printf("%i: Wayne drinks a Corn soup, and now he has %i dollar.\n",TimeNow , N);
                    }
                    else if(N==0){
                        printf("%i: Wayne drinks a Corn soup, and now he doesn't have money.\n",TimeNow);
                    }
                    TimeNow+=M;
                    CostNow=32;
                }
            }
        }
    }
    else if(K==1){
        CostNow=55;
        if(N-CostNow<0){
            cout << "Wayne can't eat and drink.";
        }
        else{
            while(N-CostNow>=0){
                N-=CostNow;
                if(CostNow==32){
                    if(N>1){
                        printf("%i: Wayne eats an Apple pie, and now he has %i dollars.\n",TimeNow , N);
                    }
                    else if(N==1){
                        printf("%i: Wayne eats an Apple pie, and now he has %i dollar.\n",TimeNow , N);
                    }
                    else if(N==0){
                        printf("%i: Wayne eats an Apple pie, and now he doesn't have money.\n",TimeNow);
                    }

                    TimeNow+=M;
                    CostNow=55;
                }
                else if(CostNow==55){

                    if(N>1){
                        printf("%i: Wayne drinks a Corn soup, and now he has %i dollars.\n",TimeNow , N);
                    }
                    else if(N==1){
                        printf("%i: Wayne drinks a Corn soup, and now he has %i dollar.\n",TimeNow , N);
                    }
                    else if(N==0){
                        printf("%i: Wayne drinks a Corn soup, and now he doesn't have money.\n",TimeNow);
                    }
                    TimeNow+=M;
                    CostNow=32;
                }
            }
        }
    }
}
