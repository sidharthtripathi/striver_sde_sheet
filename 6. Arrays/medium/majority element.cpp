#include <bits/stdc++.h>
using namespace std;
//solved using sorting the array
int majority_ele(vector <int> ques){
	sort(ques.begin(),ques.end());
	int counter = 1;
	int max_count = 0;
	int majority=ques[0];
	for(int i = 1 ; i<ques.size()-1 ; i++){
		if(ques[i]!=ques[i-1]){
			max_count = counter;
			counter = 1;
		}
		else{
			counter++;
			if(counter>max_count){
				majority = ques[i];
			}
		}
	}
	return majority;
}

// method 2 is to count number of repetetion for each element using two loops 
// as repetion of any element goes above n/2 return that element

//method 3 , best approach moore's voting algo

int voting_algo(int* a , int n){
	int king = a[0];
	int votes = 0;
	for(int i = 0 ; i<n; i++){
		if(votes==0){
			king = a[i];
		}
		if(a[i]==king){
			votes++;
		}
		else{
			votes--;
		}
	}
	return king;
}
int main(){	
int n; cin>>n;
vector <int> ques;
for(int i = 0 ; i<n ; i++){
	int temp; 
	cin>>temp;
	ques.push_back(temp);
}
	cout<<majority_ele(ques);

}