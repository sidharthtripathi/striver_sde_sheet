#include <iostream>
using namespace std;

// brute force solution
int* two_sum(int* a , int n, int k){
	int* ans = new int[2];
	for(int i = 0 ; i<n; i++){
		for(int j = i+1 ; j<n ; j++){
			if(a[i]+a[j]==k){
				ans[0] = i;
				ans[1] = j;
				return ans;
			}
		}
	}
	return ans;

}
int main(){
	int n; cin>>n;
	int* a = new int[n];
	for(int i = 0; i<n ; i++)
		cin>>a[i];
	int k; cin>>k;
	int* ans = two_sum(a,n,k);
	for(int i = 0 ; i<2 ; i++)
		cout<<ans[i]<<" ";



}

// better approacb

#include <bits/stdc++.h>
using namespace std;
vector<int> two_sum(vector <int> &ques, int k){
	vector<int> temp_arr = ques;
	vector <int> index;
	int f,s;
	int left = 0,right = ques.size()-1;
	sort(temp_arr.begin(), temp_arr.end());
	while(left<right){
		if(temp_arr[left]+temp_arr[right]==k){
			f = temp_arr[left];
			s = temp_arr[right];
			break;
		}
		else if(temp_arr[left]+temp_arr[right]<k)
			left++;
		else
			right--;
	}
	for(int i = 0 ; i<ques.size() ; i++){
		if(ques[i]==f)
			index.push_back(i);
		if(ques[i]==s)
			index.push_back(i);
	
	}
	return index;

}
int main(){
	vector <int> ques;
	int n; 
	cin>>n;
	for(int i = 0 ; i<n; i++){
		int temp;
		cin>>temp;
		ques.push_back(temp);
	}
	int k;cin>>k;
	vector <int> index = two_sum(ques,k);
	for(int i : index){
		cout<<i<<" ";
	}


}