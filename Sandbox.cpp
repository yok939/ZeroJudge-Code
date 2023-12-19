#include <cinttypes>
#include <iostream>

using namespace std;

int main()
{  
    int a;
    cin >> a;
  int b[10], temp=a;
  for(int i=0;i<10;i++){
    b[i]=0;
  }
  while(temp){
    b[(temp%10)]++;
    temp/=10;
  }
  for(int i=9;i>=0;i--){
    if(b[i]>0){
      while(b[i]){
        cout << i;
        b[i]--;
      }
    }
  }
  return 0;
}