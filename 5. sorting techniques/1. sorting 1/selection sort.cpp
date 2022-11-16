// selection sort is about finding the minimum element in array,
// then placing it in the right position


#include <iostream>
using namespace std;
void swap(int* a , int i , int j){
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}
void selection(int* a , int n){
	for(int i = 0 ; i<n-1 ; i++){
		int min_index = i;
		for(int j = i+1 ; j<n; j++){
			if(a[j]<a[min_index]){
				min_index = j;
			}
		}
		swap(a,i,min_index);
	}

}
int main(){
 int n; cin>>n;
 int* a = new int[n];
 for(int i = 0 ; i<n; i++)
 	cin>>a[i];
 selection(a,n);
 for(int i = 0 ; i<n ; i++)
 	cout<<a[i]<<" ";
}