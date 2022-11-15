#include <iostream>
using namespace std;
int main(){
int n; cin>>n;
char chr = 65;
int chr_print = n;
for(int i = 1; i<=n ; i++){
	chr = 65;
	for(int j = 1; j<=chr_print  ; j++){
		cout<<chr<<"\t";
		chr++;
	}
	chr_print--;
	cout<<endl;
}	


}