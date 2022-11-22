	#include <bits/stdc++.h>
using namespace std;
int stock_sell(int* a, int n){
	int max = 0;
	for(int i = 0 ; i<n; i++){
		for(int j = i+1 ; j<n ; j++){
			if(a[j]-a[i]>max){
				max = a[j] - a[i];
			}
		}
	}
	return max;
}
// better approach, keep a track of minimum value till that date
// check profit for each value along with
// if profit exceeds max profit, update the max profit
int max_profit(int* a , int n ){
	int min = a[0];
	int profit = 0, max_pro = 0;
	for(int i = 0 ; i<n; i++){
		if(a[i]<min)
			min = a[i];
		profit = a[i] - min;
		if(profit>max_pro)
			max_pro = profit;
	}
	return max_pro;
}

int main(){
int n; cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n ; i++){
	cin>>a[i];
}
	cout<<stock_sell(a,n);
	
}