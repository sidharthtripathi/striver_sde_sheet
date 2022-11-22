#include <bits/stdc++.h>
using namespace std;
//brute force solution, using a extra space
void altering_sing(int* a , int n ){
	vector <int> neg, pos;
	for(int i = 0 ; i<n ; i++){
		if(a[i]>0)
			pos.push_back(a[i]);
		else
			neg.push_back(a[i]);
	}
	int p = 0, ne = 0;
	for(int i = 0 ; i<n; i++){
		if(i%2==0){
			a[i] = pos[p];
			p++;
		}
		else{
			a[i] = neg[ne];
			ne++;
		}
	}
}
// method 2
void swap(int* a , int i , int j ){
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}
void alter(int* a , int n){
	// seperating neg and pos
	int i = 0 , j = n-1;
	while(i<j){
		while(a[i]>0)
			i++;
		while(a[j]<0)
			j--;
		if(i<j)
		swap(a,i,j);
	}
	//seperated till here
	int k = 1;
	while(i<n){
		swap(a,i,k);
		k = k+2; 
		i++;
	}
}

int main(){
int n; cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++){
	cin>>a[i];
}
altering_sing(a,n);
for(int i = 0; i<n ;i++)
cout<<a[i]<<" ";
	
}