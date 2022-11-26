#include <bits/stdc++.h>
using namespace std;
void pascal(int n){
	for(int i = 0 ; i<n ; i++){
		double ncrm1 = 1;
		cout<<ncrm1<<" ";
		for(double j = 1 ; j<=i ; j++){
			ncrm1 = ((i-j+1) * ncrm1)/j;
			cout<<ncrm1<<" ";
		}
		cout<<endl;

	}

}

int main(){

pascal(4);

}