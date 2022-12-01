
#include <iostream>
using namespace std;
int max_sub(int* a , int n , int target){
int maxi = 0, s = 0;
int sum = 0;
for(int j = 0 ; j<n and s<n ; j++){
	sum = sum + a[j];
	if(sum == target){
		maxi = max(maxi,j-s+1);
	}
	else if(sum>target){
		sum = sum - a[s];
		s++;
	}
}
return maxi;
}

int max_sub2(int* a , int n , int target){
	int maxi = 0;
for(int i = 0 ; i<n ; i++){
	int sum = 0;
	for(int j = i ; j<n ; j++){
		sum = sum + a[j];
		if(sum == target){
			maxi = max(maxi , j-i+1);
		}
	}
}
}

int main(){
 int n; cin>>n;
 int* a = new int[n];
 for(int i = 0 ; i<n; i++)
 	cin>>a[i];
 cout<<max_con_ones(a,n);


}