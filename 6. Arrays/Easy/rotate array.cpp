
#include <iostream>
using namespace std;
void left_rotate(int* a , int n , int k ){
	if(k<0){
		k = n - (-k);
	}
	if(k>=n)
		k = k%n;
	int i = 0,j=k;
	int* b = new int[n];
	while(j<n){
		b[i] = a[j];
		j++;
		i++;
	}
	j=0;
	while(j<k){
		b[i] = a[j];
		j++;
		i++;
	}
	for(int i = 0; i<n ; i++){
		cout<<b[i]<<" ";
	}
}
int main(){
 int n; cin>>n;
 int* a = new int[n];
 for(int i = 0 ; i<n; i++)
 	cin>>a[i];
 int k; cin>>k;
 left_rotate(a,n,k);

}