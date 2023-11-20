#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

<<<<<<< HEAD
    int n, left_=0, right_=0, return_=0;
    char turn='E';
=======
    int turn=1, n, left_=0, right_=0, return_=0;
    char mode='X';
>>>>>>> ca76ac980ef501ad68783bf83e8cc1401467abbe
    cin >> n;
    vector<int> x(n+1);
    vector<int> y(n+1);
    x[0]=0, y[0]=0;
    for(int i=1;i<n+1;i++){
        cin >> x[i] >> y[i];
    }
<<<<<<< HEAD
    for(int i=0;i<n;i++){
        int change_x=x[i+1]-x[i];
        int change_y=y[i+1]-y[i];
        if(turn=='W'){
            if(change_y<0){left_++;turn='S';}
            else if(change_y>0){right_++;turn='N';}
            else if(change_y==0&&change_x>0){return_++;turn='E';}
        }
        if(turn=='E'){
            if(change_y<0){right_++;turn='S';}
            else if(change_y>0){left_++;turn='N';}
            else if(change_y==0&&change_x<0){return_++;turn='W';}
        }
        if(turn=='N'){
            if(change_x<0){left_++;turn='W';}
            else if(change_x>0){right_++;turn='E';}
            else if(change_x==0&&change_y<0){return_++;turn='S';}
        }
        if(turn=='S'){
            if(change_x<0){right_++;turn='W';}
            else if(change_x>0){left_++;turn='E';}
            else if(change_x==0&&change_y>0){return_++;turn='N';}
        }


=======
    cout << endl;
    for(int i=0;i<n;i++){
        int change_x=x[i+1]-x[i];
        int change_y=y[i+1]-y[i];
        cout << change_x << " " << change_y << "  " << turn << endl;
        if(mode='X'){
            if(turn=1){
                if(change_y>0){
                    turn=1;
                    left_++;
                    mode='Y';
                }
                else if(change_y<0){
                    turn=-1;
                    right_++;
                    mode='Y';
                }
                else if(change_x<0){
                    turn=-1;
                    return_++;
                }
            }
            else if(turn=-1){
                if(change_y>0){
                    turn=1;
                    right_++;
                    mode='Y';
                }
                else if(change_y<0){
                    turn=-1;
                    left_++;
                    mode='Y';
                }
                else if(change_x>0){
                    turn=1;
                    return_++;
                }
            }

        }
        else if(mode='Y'){
            if(turn=1){
                if(change_x>0){
                    turn=1;
                    right_++;
                    mode='X';
                }
                else if(change_x<0){
                    turn=-1;
                    left_++;
                    mode='X';
                }
                else if(change_y<0){
                    turn=-1;
                    return_++;
                }
            }
            else if(turn=-1){
                if(change_x>0){
                    turn=1;
                    left_++;
                    mode='X';
                }
                else if(change_x<0){
                    turn=-1;
                    right_++;
                    mode='X';
                }
                else if(change_y>0){
                    turn=1;
                    return_++;
                }
            }
        }
>>>>>>> ca76ac980ef501ad68783bf83e8cc1401467abbe
    }
    printf("%d %d %d", left_, right_, return_);
    return 0;
}



/*
    2
 -1   1
   -2


*/
