#include <iostream>
using namespace std;
int main(){
int n; cin>>n;
int rows = 2*n - 1;
int str = 1;
int spc = 2*n -2;
for(int i = 1 ; i<=rows ; i++){
	//printing str
	for(int j = 1; j<=str ; j++){
		cout<<"*\t";
	}
	//printing spc
	for(int j = 1; j<=spc ; j++){
		cout<<"\t";
	}
	//printing str
	for(int j = 1; j<=str ; j++){
		cout<<"*\t";
	}
	if(i>=n){
		str--;
		spc = spc + 2;
	}
	else{
		str++;
		spc = spc - 2;
	}
	cout<<endl;


}


}