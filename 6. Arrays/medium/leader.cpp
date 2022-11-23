#include <iostream>
using namespace std;
void leaders(int* a , int n){
	int leader = INT_MIN;
	for(int i = n-1 ; i>=0 ; i--){
		if(a[i]>leader){
			cout<<a[i]<<endl;
			leader = a[i];
		}

	}
}
int main(){
	int n; cin>>n;
	int* a = new int[n];
	for(int i = 0 ; i<n; i++)
		cin>>a[i];
	leaders(a,n);

}