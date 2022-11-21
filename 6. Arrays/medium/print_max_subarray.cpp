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
vector <int> max_sub(int*a , int n ){
    vector <int> subset;
    vector <int> overall_subset;
    subset.push_back(a[0]);
    int current_sum = a[0];
    int overall_best = a[0];
    for(int i = 1; i<n; i++){
        if(a[i]+current_sum > a[i]){
            current_sum = current_sum +a[i];
            subset.push_back(a[i]);
        }
        
        else{
            current_sum = a[i];
            subset.clear();
            subset.push_back(a[i]);
        }
        if(current_sum > overall_best){
            overall_best = current_sum;
            overall_subset = subset;
        }
        
    }
    return overall_subset;
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