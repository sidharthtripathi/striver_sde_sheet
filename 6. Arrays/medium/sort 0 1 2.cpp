#include <iostream>
using namespace std;
void swap(int* a , int i , int j){
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}
void sort(int* a, int n){
	int i = 0 , j = 0 , k = n-1;
	while(i<=j){
		if(a[i]==1)
			i++;
		else if(a[i]==0){
			swap(a,i,j);
			j++;
			i++;
		}
		else if(a[i]==2){
			swap(a,i,k);
			k--;
		}
	}
}



int main(){
	
int n; cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++)
cin>>a[i];
sort(a,n);
for(int i = 0 ; i<n; i++)
	cout<<a[i]<<" ";

}