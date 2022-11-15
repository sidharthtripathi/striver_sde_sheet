#include <iostream>
using namespace std;
int gcd(int a, int b){
	int mini = min(a,b);
	int i = 1;
	int gcd;
	while(i<=mini){
		if(a%i==0 and b%i==0)
			gcd = i;
		i++;
	}
	return gcd;
}
int main(){
	int a,b; cin>>a>>b;
	cout<<gcd(a,b);

}