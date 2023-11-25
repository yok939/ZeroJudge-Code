#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, building[1000], lmax=INT_MIN, rmax=INT_MIN, total=0;
	cin >> n >> m;
	for(int i=0;i<n;i++) cin >> building[i];
	lmax=rmax=building[m-1];
	for(int j=m;j<n;j++) if(building[j]>rmax){rmax=building[j];total++;}
	for(int j=m-2;j>=0;j--) if(building[j]>lmax){lmax=building[j];total++;}
	cout << total;
	
}
