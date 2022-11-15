#include <iostream>
using namespace std;
int main(){
int n ; cin>>n;
int num = n;
for(int i = 1 ; i<=n ; i++){
	
	for(int j = 1; j<=num ; j++){
		cout<<j<<"\t";
	}	
	num--;
	cout<<endl;

}
}