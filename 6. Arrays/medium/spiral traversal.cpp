#include<bits/stdc++.h>

using namespace std;

int main() {
int n,m; cin>>n>>m;
int a[n][m];
for(int i = 0 ; i<n; i++)
	for(int j = 0; j<m ; j++)
		cin>>a[i][j];

// printing in spiral
	int counter = 0;
	int min_r = 0, min_c = 0 , max_r = n-1 , max_c = m-1;
	while(counter<n*m){
		//printing top wall
		for(int i = min_r , j = min_c ; j<=max_c and counter<n*m; j++){
			cout<<a[i][j]<<" ";
			counter++;
		}
		min_r++;

		//printing right wall
		for(int i = min_r , j=max_c ; i<=max_r and counter<n*m ; i++){
			cout<<a[i][j]<<" ";
			counter++;
		}
		max_c--;
		//printing bottom wall
		for(int i = max_r , j = max_c ; j>=min_c and counter<n*m ; j--){
			cout<<a[i][j]<<" ";
			counter++;
		}
		max_r--;
		//printing left wall
		for(int i = max_r , j=min_c ; i>=min_r and counter<n*m ; i--){
			cout<<a[i][j]<<" ";
			counter++;
		}
		min_c++;
	}





}