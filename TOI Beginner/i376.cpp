#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, grid[100][100], rmin=INT_MAX, rindex=0, cmax=INT_MIN, cindex=0;
	cin >> n;
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin >> grid[i][j];
	for(int i=0;i<n;i++){
		rmin=INT_MAX, rindex=0;
		for(int k=0;k<n;k++) if(grid[k][i]<rmin){rmin=grid[k][i];rindex=k;}
		for(int j=0;j<n;j++){
			cmax=INT_MIN, cindex=0;
			for(int k=0;k<n;k++){
				if(grid[j][k]>=cmax){
					cmax=grid[j][k];
					cindex=(cindex<=rindex)?k:cindex;
				}
			}
			if(cmax==rmin){
				printf("%d %d", rindex, cindex);
				return 0;
			}
		}
	}
	cout << "NO";
	return 0;
}
