#include <iostream>
using namespace std;
int digit_count(int n){
	int digits = 0;
	while(n>0){
		digits++;
		n = n/10;
	}
	return digits;
}
int main(){
cout<<digit_count(0);


}