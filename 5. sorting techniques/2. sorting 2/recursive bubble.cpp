
#include <iostream>
using namespace std;
void recursive_bubble(int* a , int n){
if(n==1) return;
	for(int i = 1 ; i<n ; i++){
		if(a[i]<a[i-1]){
			int temp = a[i];
			a[i] = a[i-1];
			a[i-1] = temp;
		}
	}
	recursive_bubble(a,n-1);

}
int main(){
 int n; cin>>n;
 int* a = new int[n];
 for(int i = 0 ; i<n; i++)
 	cin>>a[i];
recursive_bubble(a,n);
 for(int i = 0 ; i<n ; i++)
 	cout<<a[i]<<" ";
}