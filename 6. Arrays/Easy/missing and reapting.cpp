
#include <iostream>
using namespace std;
void missNrepeat(int* a , int n){
	int b[n] = {0};
	for(int i = 0  ; i<n ; i++){
		b[a[i]-1]++;
	}
	int miss,repeat;
	for(int i = 0 ; i<n; i++){
		if(b[i]==0)
			miss = i+1;
		if(b[i] == 2)
			repeat = i+1;
	}
	cout<<"missing: "<<miss<<endl;
	cout<<"reapting: "<<repeat;
}
int main(){
 int n; cin>>n;
 int* a = new int[n];
 for(int i = 0 ; i<n; i++)
 	cin>>a[i];
 missNrepeat(a,n);


}