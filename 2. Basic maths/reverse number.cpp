#include <iostream>
using namespace std;
void reverse_num(int n){
	while(n>0){
		cout<<n%10;
		n = n/10;
	}
}
int main(){
	int n;cin>>n;
	reverse_num(n);

}