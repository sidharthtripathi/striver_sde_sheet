
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

////////////////////////////////////
// using different approach //
void miss_rep(int* a , int n){
int Y = (n*(n+1))/2;
int Y2 = n*(n+1)*(2*n+1)/6;
int X = 0,X2 = 0;
for(int i = 0 ; i<n ;i++){
X = X + a[i];
X2 = X2 + a[i]*a[i];
}
int val1 = ((X - Y) + ((X2 - Y2)/(X-Y)))/2;
int val2 = val1 - (X-Y);
cout<<"repeating: "<<val1<<endl<<"missing: "<<val2;

}