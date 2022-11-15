#include <iostream>
using namespace std;
int palindrome_num(int n){
	int digi = 0;
	while(n>0){
		digi = digi*10 + (n%10);
		n = n/10;
	}
	return digi;
}
int main(){
	int n;cin>>n;
	cout<<palindrome_num(n);

}