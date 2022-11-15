#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int str = 1;
for(int i = 1; i<=2*n-1 ; i++){
	for(int j = 1; j<=str ; j++){
		cout<<"*\t";
	}
	cout<<endl;
	if(i>=n)
		str--;
	else
		str++;
}	


}