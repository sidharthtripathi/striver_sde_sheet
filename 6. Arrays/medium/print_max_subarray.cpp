#include <bits/stdc++.h>
using namespace std;
vector<int> max_subarray(int* a, int n){
	vector <int> ques;
	vector <int> f_ans;
	int ans = 0;
	int max_ans = INT_MIN;
	for(int i = 0 ; i<n ; i++){
		ans = 0;
		ques.clear();
		for(int j = i ; j<n ; j++){
			ans = ans + a[j];
			ques.push_back(a[j]);
			if(ans>max_ans){
				f_ans = ques;
				max_ans = ans;
			}
		}
	}
	return f_ans;
}
int main(){
	
int n; cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++){
	cin>>a[i];
}
	vector <int> ans = max_subarray(a,n);
	for(int &i : ans)
		cout<<i<<" ";
}