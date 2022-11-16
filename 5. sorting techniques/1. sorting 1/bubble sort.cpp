
#include <iostream>
using namespace std;
void swap(int* a , int i , int j){
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}
void bubble(int* arr, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
int main(){
 int n; cin>>n;
 int* a = new int[n];
 for(int i = 0 ; i<n; i++)
 	cin>>a[i];
bubble(a,n);
 for(int i = 0 ; i<n ; i++)
 	cout<<a[i]<<" ";
}