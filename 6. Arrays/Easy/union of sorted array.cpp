#include <bits/stdc++.h>
using namespace std;
//union of two sorted arrays
vector <int> unio(int*a , int n , int* b  , int m){
vector <int> uni;
uni.push_back(a[0]);
int i = 0 , j = 0;
while(i<n and j<m){
	if(a[i]<b[j]){
	if(a[i]!=uni.back()){
		uni.push_back(a[i]);
	}
	i++;
	}
	else if(b[j]<a[i]){
		if(b[j]!=uni.back()){
			uni.push_back(b[j]);
	}
	j++;

	}
}
if(i>=n){
	while(j<m){
		if(uni.back()!=b[j]){
			uni.push_back(b[j]);
		}
		j++;
	}
}
if(j>=m){
	while(i<n){
		if(uni.back()!=a[i]){
			uni.push_back(a[i]);
		}
		i++;
	}
}
return uni;

}
// using maps


int main(){
int n; cin>>n;
int* a = new int[n];
int m; cin>>m;
int* b = new int[m];
for(int i = 0 ; i<n ; i++)
cin>>a[i];
for(int i = 0 ; i<m ; i++)
cin>>b[i];

vector <int> uni = unio(a,n,b,m);
for(int i:uni)
cout<<i<<" ";

}