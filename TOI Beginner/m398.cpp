#include <bits/stdc++.h>


using namespace std;

int main(){
	int amount[3], temp1=0, temp2=0, min_time=INT_MAX, min_index=0;
	for(int i=0;i<3;i++){
		cin>>amount[i];
	}
	for(int i=0;i<3;i++){
		temp2=0;
		for(int j=0;j<amount[i];j++){
			cin >> temp1;
			temp2+=3*temp1;
			if(j!=amount[i]-1){
				temp2+=2;
			}
		}
		if(min_time>temp2){
			min_time=temp2;
			min_index=i+1;
		}
	}	
	printf("%d %d", min_index, min_time);
	return 0;

}
