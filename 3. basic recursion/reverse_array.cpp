#include <iostream>
#include <cmath>
using namespace std;
void rev_array(int* a , int s , int e){
	if(s>=e) return;
	int temp = a[s];
	a[s] = a[e];
	a[e] = temp;
	rev_array(a,s+1,e-1);


}
int main(){
int n; cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ;i++)
cin>>a[i];
rev_array(a,0,n-1);
for(int i = 0 ; i<n ; i++)
	cout<<a[i]<<" ";
}