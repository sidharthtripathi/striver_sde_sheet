
#include <iostream>
using namespace std;
int sec_largest(int* a , int n){
	int f_max = a[0];
	for(int i = 1 ; i<n; i++){
		if(a[i]>f_max)
			f_max = a[i];
	}
	int s_max = INT_MIN;
	for(int i = 0 ; i<n; i++){
		if(a[i]>s_max and a[i]!=f_max)
			s_max = a[i];
	}
	return s_max;
}

// second approach
int sec_max(int* a , int n){
	int f_max = INT_MIN,s_max = INT_MIN;
	for(int i = 0 ; i<n ; i++){
		if(a[i]>f_max){
			s_max = f_max;
			f_max = a[i];
		}
		else if(a[i]>s_max and a[i]!=f_max)
			s_max = a[i];
	}
	return s_max;
}
int main(){
 int n; cin>>n;
 int* a = new int[n];
 for(int i = 0 ; i<n; i++)
 	cin>>a[i];
 cout<<sec_max(a,n);
}