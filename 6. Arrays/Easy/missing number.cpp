
#include <iostream>
using namespace std;
int missing(int* a , int n){
	int b[n+1] = {0};
	for(int i = 0  ; i<n ; i++){
		b[a[i]-1]++;
	}
	for(int i = 0 ; i<n; i++){
		if(b[i]==0)
			return i+1;
	}
	return 0;
}
int main(){
 int n; cin>>n;
 int* a = new int[n];
 for(int i = 0 ; i<n; i++)
 	cin>>a[i];
 cout<<missing(a,n);


}