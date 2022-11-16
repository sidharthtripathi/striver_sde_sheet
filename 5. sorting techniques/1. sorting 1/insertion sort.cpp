
#include <iostream>
using namespace std;
void swap(int* a , int i , int j){
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}
void insertion(int* a , int n){
	for(int i = 0 ; i<n-1 ; i++){
		int j = i+1;
		for(j ; j>=1; j--){
			if(a[j]<a[j-1])
				swap(a,j,j-1);
			else
				break;
		}
	}
}
int main(){
 int n; cin>>n;
 int* a = new int[n];
 for(int i = 0 ; i<n; i++)
 	cin>>a[i];
insertion(a,n);
 for(int i = 0 ; i<n ; i++)
 	cout<<a[i]<<" ";
}