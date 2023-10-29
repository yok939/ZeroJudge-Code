#include <iostream>

using namespace std;

int main()
{
<<<<<<< HEAD
    int a[3];
    for(int i=0;i<3;i++){
        cin >> a[i];
    }
    for(int i=0;i<3;i++){
        int temp=0;
        if(i==0||i==2){
            if(a[0]>a[1]){
                temp=a[0];
                a[0]=a[1];
                a[1]=temp;
            }
        }
        else{
            if(a[1]>a[2]){
                temp=a[1];
                a[1]=a[2];
                a[2]=temp;
            }
        }
    }
    printf("%d %d %d\n", a[0], a[1], a[2]);
    if(a[0]+a[1]<=a[2]){
        cout << "No";
    }
    else if(a[0]*a[0]+a[1]*a[1]<a[2]*a[2]){
        cout << "Obtuse";
    }
    else if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]){
        cout << "Right";
    }
    else if(a[0]*a[0]+a[1]*a[1]>a[2]*a[2]){
        cout << "Acute";
    }
}

// 1 3 2
// 2 3 1 > 2 3 1 >> 2 1 3 >>> 1 2 3
=======
    long long a, b, c
}
>>>>>>> ca76ac980ef501ad68783bf83e8cc1401467abbe
