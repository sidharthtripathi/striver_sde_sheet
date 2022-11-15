#include <iostream>
using namespace std;
int main(){
int n; cin>>n;
for(int i = 1; i<=n ; i++){
	char chr = 65 + n-i;
	for(int j = 1; j<=i ; j++){
		cout<<chr<<"\t";
		chr++;
	}
	cout<<endl;
}	


}