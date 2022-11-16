
#include <iostream>
using namespace std;
void recursive_insertion(int* a , int n){
if(n==1) return;
recursive_insertion(a,n-1);
for(int j = n-1 ; j>=1 ; j--){
	if(a[j-1]>a[j]){
		int temp = a[j-1];
		a[j-1] = a[j];
		a[j] = temp;
	}
	else
		return;
}

}
int main(){
 int n; cin>>n;
 int* a = new int[n];
 for(int i = 0 ; i<n; i++)
 	cin>>a[i];
recursive_insertion(a,n);
 for(int i = 0 ; i<n ; i++)
 	cout<<a[i]<<" ";
}