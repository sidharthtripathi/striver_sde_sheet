#include <iostream>
using namespace std;
int main(){
int n; cin>>n;
int spc = n-1;
int print_chr = 1;
for(int i = 1; i<=n ; i++){
//print spaces
	for(int j = 1; j<=spc ; j++){
		cout<<"\t";
	}
// print alphabets
	char chr = 65;
	for(int j = 1; j<=print_chr ; j++){
		cout<<chr<<"\t";
		if(j>=i)
			chr--;
		else
			chr++;
	}
	print_chr = print_chr + 2;
	spc--;
	cout<<endl;


}	


}