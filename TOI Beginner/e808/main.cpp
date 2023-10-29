#include <iostream>
#include <string>

using namespace std;




int main()
{
    int n, h, m, t, p=-1, after_h, after_m;
    string after_hh, after_mm;
    int Times_[20]={0};
    bool first_input = true;

    cin >> n;
    cin >> h >> m;
    for(int i=0;i<n;i++){
        cin >> t;
        Times_[i]={t};
    }

    for(p=-1;p!=0;cin >> p){
        after_h=h;after_m=m;
        for(int j=0;j<p;j++){
            after_m+=Times_[j];
        }
        while(after_m>=60){
            if(after_m>59){
                after_m-=60;
                after_h++;
            }
            if(after_h>23){
                after_h=0;
            }
        }

        if(after_m>=0&&after_m<=9){
            after_mm="0"+to_string(after_m);
        }
        else{
            after_mm=to_string(after_m);
        }
        if(after_h>=0&&after_h<=9){
            after_hh="0"+to_string(after_h);
        }
        else{
            after_hh=to_string(after_h);
        }
        if(first_input){
            first_input = false;
        }
        else{
            cout << after_hh << ":" << after_mm << endl;
        }

    }



}
