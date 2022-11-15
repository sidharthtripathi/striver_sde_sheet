#include <iostream>
using namespace std;
bool armstrong(int n){
int temp = n;
int ans = 0;
while(temp>0){
	ans = ans + (temp%10)*(temp%10)*(temp%10);
	temp = temp/10;
}
return (ans==n);

}
int main(){
	int n; cin>>n;
	cout<<armstrong(n);
}