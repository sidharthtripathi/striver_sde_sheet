#include <iostream>
using namespace std;
int main(){
int n; cin>>n;
for(int i = 1 ; i<=n ; i++){
	if(i==1 or i==n){
		for(int j = 1; j<=n ; j++){
			cout<<"*\t";
		}
	}
	else{
		cout<<"*\t";
		for(int j = 1; j<=n-2 ; j++){
			cout<<"\t";
		}
		cout<<"*\t";
	}
	cout<<endl;
}


}