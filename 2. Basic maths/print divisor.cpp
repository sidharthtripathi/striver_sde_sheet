#include <iostream>
using namespace std;
void divisor(int n ){
	for(int i = 1; i<=n ;i++){
		if(n%i==0)
			cout<<i<<" ";
	}
}
int main(){
	int n; cin>>n;
	divisor(n);
}
 // another approach is to go until root of the given number
 // find the divisor, the other pair will be n/divisor