
#include <iostream>
using namespace std;
void remove_dup(int* a , int n){
	int i = 0, j = 1;
	while(j<n){
		if(a[i]!=a[j]){
			i++;
			a[i] = a[j];
		}
		j++;
	}
	i++;
	while(i<n){
		a[i] = 0;
		i++;
	}

}
int main(){
 int n; cin>>n;
 int* a = new int[n];
 for(int i = 0 ; i<n; i++)
 	cin>>a[i];
 remove_dup(a,n);
 for(int i = 0 ; i<n ; i++)
 	cout<<a[i]<<endl;
}