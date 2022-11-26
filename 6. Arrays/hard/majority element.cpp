#include <bits/stdc++.h>
using namespace std;

vector <int> majority(int* a , int n){
	int n1 = -1;
	int n2 = -1;
	int c1 = 0 , c2 = 0;
	for(int i = 0 ; i<n ; i++){
		if(c1 == 0){
			n1 = a[i];
			c1++;
		}
		else if(c2 == 0){
			n2 = a[i];
			c2++;
		}
		else if(n1 == a[i])
			c1++;
		else if(n2 == a[i])
			c2++;
		else{
			c1--;
			c2--;
		}
	}
	//cout<<n1<<" "<<n2;
	vector <int> ans;
	c1 = c2 = 0;
	for(int i = 0 ; i<n; i++){
		if(a[i]==n1)
			c1++;
		else if(a[i]==n2)
			c2++;
	}
	if(c1>n/3)
		ans.push_back(n1);
	if(c2>n/3)
		ans.push_back(n2);
	return ans;


}


int main(){

int n; cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n; i++)
cin>>a[i];
vector <int> ans = majority(a,n);	
cout<<ans[0]<<" "<<ans[1];

}