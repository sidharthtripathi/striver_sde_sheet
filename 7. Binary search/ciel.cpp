 #include <bits/stdc++.h>
using namespace std;

void ciel_floor(vector <int> &ques, int value){
int floor = INT_MIN, ciel = INT_MAX;
int low = 0 , high = ques.size()-1;
int mid;
while(low<=high){
	mid = (low+high)/2;
	if(ques[mid]>value){
		ciel = ques[mid];
		high = mid - 1;
	}
	else if(ques[mid]<value){
		floor = ques[mid];
		low = mid + 1;
	}
	else{
		ciel = ques[mid];
		floor = ques[mid];
		break;
	}
}
cout<<floor<<" "<<ciel;
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
ciel_floor(ques,target);


}
