#include <iostream>
using namespace std;
int main(){
int n,num;
cin>>n;
for(int i = 1 ; i<=n ; i++){
	if(i%2==0)
		num = 0;
	else
		num = 1;
	for(int j = 1; j<=i ; j++){
		cout<<num<<" ";
		num = (num==1) ? 0 : 1;
	}
	cout<<endl;
}	


}