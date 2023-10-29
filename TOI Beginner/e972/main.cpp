#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int Index(char In_char, char *list)
{
    int i;
    for(i=0;i<4;i++){
        if(In_char==list[i]){
            return i;
        }

    }

    return -1;
}

int main()
{
    int n, m;
    char select_;

    char currency1[4]={'T', 'U', 'J', 'E'};
    double currency2[4]={1, 30.9, 0.28, 34.5};
    setprecision(4);
    cin >> n >> m >> select_;
     if((n/currency2[Index(select_, currency1)])-m>=0.05){
        cout << select_ << " ";
        printf("%.2lf",(n/currency2[Index(select_, currency1)])-m);
    }
    else if((n/currency2[Index(select_, currency1)])-m<0.05&&(n/currency2[Index(select_, currency1)])-m>0){
        cout << select_ << " ";
        cout << "0.00";
    }
    else{
        cout << "No Money";
    }

}
