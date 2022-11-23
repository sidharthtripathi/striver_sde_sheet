#include <bits/stdc++.h>
using namespace std;
//brute force method by sorting
int longest_con(vector <int>ques){
	sort(ques.begin(), ques.end());
	int len = 1,max_len=0;
	for(int i = 1 ; i<ques.size()-1 ; i++){
		if(ques[i] == ques[i-1]+1){
			len++;
		}
		else{
			len = 1;
		}
		if(len>max_len)
			max_len = len;
	}
	return max_len;

}
int main(){
	int n; cin>>n;
	vector <int> ques;
	for(int i = 0 ; i<n; i++){
		int temp;cin>>temp;
		ques.push_back(temp);
	}
	cout<<longest_con(ques);

}