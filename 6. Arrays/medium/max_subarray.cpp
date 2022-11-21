#include <bits/stdc++.h>
using namespace std;
int max_sub(int* a, int n){
	int ans = 0;
	int max_ans = INT_MIN;
	for(int i = 0 ; i<n ; i++){
		ans = 0;
		for(int j = i ; j<n ; j++){
			ans = ans + a[j];
			if(ans>max_ans)
				max_ans = ans;
		}
	}
	return max_ans;
}

int max_sub(int* a, int n){
int curr_max = INT_MIN;
int best = INT_MIN;
for(int i = 0 ;i<n ;i++){
	if(a[i]>a[i]+curr_max){
		curr_max = a[i];
	}
	else{
		curr_max = a[i] + curr_max;
	}
	if(curr_max>best)
		best = curr_max;
}
return best;
}

int main(){
	
int n; cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++){
	cin>>a[i];
}
	cout<<max_sub(a,n);

}