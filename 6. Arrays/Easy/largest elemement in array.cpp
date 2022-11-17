
#include <iostream>
using namespace std;
int largest(int* a , int n){
int max  = a[0];
for(int i = 1; i<n ; i++)
if(a[i]>max)
	max = a[i];
return max;


}
int main(){
 int n; cin>>n;
 int* a = new int[n];
 for(int i = 0 ; i<n; i++)
 	cin>>a[i];
 cout<<largest(a,n);
}