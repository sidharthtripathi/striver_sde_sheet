#include <iostream>
using namespace std;

// brute force solution
int largest_sub_zero(int* a , int n){
	int counter = 0,max_count = 0;
	for(int i = 0 ; i<n ; i++){
		int sum = 0;
		for(int j = i ; j<n ; j++){
			sum = sum + a[j];
			if(sum == 0){
				counter = j-i+1;
			}
			if(counter > max_count)
				max_count = counter;
		}
	}
	return max_count;
}
int main(){
	int n; cin>>n;
	int* a = new int[n];
	for(int i = 0 ; i<n; i++){
		cin>>a[i];
	}
	cout<<largest_sub_zero(a,n);
}