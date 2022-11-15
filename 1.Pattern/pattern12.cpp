#include <iostream>
using namespace std;
int main(){
int n,num;
cin>>n;
int spc = 2*n - 2;
for(int i = 1 ; i<=n ; i++){
	//print numbers
	for(int j = 1 ; j<=i ; j++){
		cout<<j<<"\t";
	}
	//print spaces
	for(int j = 1; j<=spc ; j++){
		cout<<"\t";
	}
	//print rev numbers
	for(int j = i ; j>=1 ; j--){
		cout<<j<<"\t";
	}
	cout<<endl;
	spc = spc - 2;
}	


}