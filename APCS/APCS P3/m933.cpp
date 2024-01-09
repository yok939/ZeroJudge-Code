#include <bits/stdc++.h>

using namespace std;

int recur_simulation(int id);

struct NODE{
    int type; //0, 1, 2 for input, output, function
    int gate; //1, 2, 3, 4 for AND, OR, XOR, NO
    int value=-1, delay=-1; //-1: Haven't count
    int s0=-1, s1=-1; //-1: No source
};

NODE arr[53000];

int main(){
    int p, q, r, m;
    cin >> p >> q >> r >> m;
}