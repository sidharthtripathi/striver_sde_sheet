
#include <iostream>
using namespace std;
//using extra space
void move_zeroes(int* a , int n){
	int* b = new int[n];
	int j = 0;
	int zeroes = 0;
	for(int i = 0 ; i<n; i++){
		if(a[i]!=0){
			b[j] = a[i];
			j++;
		}
		else
			zeroes++;
	}
	for(int i = 1 ; i<=zeroes ; i++){
		b[n-i] = 0;
	}

	for(int i = 0 ; i<n; i++)
		cout<<b[i]<<" ";
}


// without maintaining the order
void push_zeroes(int* a , int n){
	int i = 0 , j = n-1;
	while(i<j){
		if(a[i]==0){
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			j--;
			i--;
		}
		i++;
	}
}

// not using extra space and maintaining order
void push_zeroes_r(int* a , int n){
	// left will say -> elements to my left will be non zeroes
	// and right is my slave who will bring me non zero by travelling through array
	int l = 0, r = 0;
	while(r<n){
		if(a[r]!=0){
			//swap with l
			int temp = a[l];
			a[l] = a[r];
			a[r] = temp;
			l++;
		}
		r++;
	}




}
int main(){
 int n; cin>>n;
 int* a = new int[n];
 for(int i = 0 ; i<n; i++)
 	cin>>a[i];
 push_zeroes_r(a,n);
 for(int i = 0 ; i<n ; i++)
 	cout<<a[i]<<" ";

}