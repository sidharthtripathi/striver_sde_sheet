 #include <bits/stdc++.h>
using namespace std;

int binary(vector <int> &ques,int target){
	int low = 0, high = ques.size()-1;
	int mid;
	while(low<=high){
		mid = (low+high)/2;
		if(target>ques[mid]){
			low = mid + 1;
		}
		else if(target<ques[mid]){
			high = mid - 1;
		}
		else{
			return mid;
		}
	}
	return -1;
}

int main(){
int n;cin>>n;
vector <int> ques;
for(int i = 0 ; i<n; i++){
	int temp;
	cin>>temp;
	ques.push_back(temp);
}
int target; cin>>target;
cout<<binary(ques,target);


}
