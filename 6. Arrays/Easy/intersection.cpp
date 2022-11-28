#include <bits/stdc++.h>
using namespace std;
// intersectin of two sorted array
//brute force solution
vector <int> intersection(int* a , int n , int*b , int m){
	vector <int> inter;
	if(n==0)
		return inter;
	inter.push_back(-1);
	for(int i = 0 ; i<n; i++){
		if(inter.back()!=a[i]){
			for(int j = 0 ; j<m ; j++){
				if(b[j] == a[i]){
					inter.push_back(b[j]);
					break;
				}
			}
		}
	}
	return inter;
}


int main(){
int n; cin>>n;
int* a = new int[n];
int m; cin>>m;
int* b = new int[m];
for(int i = 0 ; i<n ; i++)
cin>>a[i];
for(int i = 0 ; i<m ; i++)
cin>>b[i];

vector <int> inter = intersection(a,n,b,m);
for(int i: inter)
	if(i!=-1)
cout<<i<<" ";

}