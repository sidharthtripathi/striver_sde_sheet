
#include <iostream>
using namespace std;
int max_con_ones(int* a , int n){
	int counter = 0,max_count = 0;
for(int i = 0 ; i<n ; i++){
	if(a[i]==1){
		counter++;
		if(counter>max_count)
			max_count = counter;
	}
	else
		counter = 0;
}
return max_count;
}
int main(){
 int n; cin>>n;
 int* a = new int[n];
 for(int i = 0 ; i<n; i++)
 	cin>>a[i];
 cout<<max_con_ones(a,n);


}