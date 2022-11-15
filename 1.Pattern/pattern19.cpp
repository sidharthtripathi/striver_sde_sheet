#include <iostream>
using namespace std;
int main(){
int n; cin>>n;
int str = n;
int spc = 0;
for(int j = 1; j<=2 ; j++){
for(int k = 1; k<=n; k++){
	//printing str
	for(int i = 1; i<=str ; i++){
		cout<<"*\t";
	}
	//print spc
	for(int i = 1; i<=spc ; i++){
		cout<<"\t";
	}
	//print str
	for(int i = 1; i<=str ; i++){
		cout<<"*\t";
	}
	if(j==1){
	str--;
	spc = spc + 2;
	}
	else{
	str++;
	spc = spc - 2;	
	}

	cout<<endl;
}	
str = 1;
spc = 2*n - 2;
}



}