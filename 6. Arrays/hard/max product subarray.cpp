#include <bits/stdc++.h>
using namespace std;
// brute force solution
int max_product_sub(vector <int> &a){
	int n = a.size();
	int max_product = 1;
	for(int i = 0 ; i<a.size() ; i++){
		int product = 1;
		for(int j = i ; j<n; j++){
			product = product * a[j];
			if(product>max_product)
				max_product = product;
		}
	}
	return max_product;
}

int main(){
int n; cin>>n;
vector <int> a; 
for(int i = 0 ; i<n ; i++){
	int temp;cin>>temp;
	a.push_back(temp);
}
cout<<max_product_sub(a);

}