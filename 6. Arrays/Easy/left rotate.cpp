
#include <iostream>
using namespace std;
void lr_one(int* a , int n ){
	int temp = a[0];
	for(int j = 1; j<n ; j++){
		a[j-1] = a[j];
	}
	a[n-1] = temp;
}
int main(){
 int n; cin>>n;
 int* a = new int[n];
 for(int i = 0 ; i<n; i++)
 	cin>>a[i];
 lr_one(a,n);
 for(int i = 0 ; i<n ; i++)
 	cout<<a[i]<<" ";
}