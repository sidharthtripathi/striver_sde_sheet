#include <bits/stdc++.h>
using namespace std;

// same as two sum problem, but we will choose one element, then use two sum approach
//on rest of array
bool two_sum(vector <int> &a , int &rem_target , int& i , int&j, int choosen){
i = 0,j=a.size()-1;
while(i<j){
	if(i==choosen)
		i++;
	else if(j==choosen)
		j--;
	if(a[i]+a[j]>rem_target)
	j--;
	else if(a[i]+a[j]<rem_target)
	i++;
	else
		return true;

}
return false;

}
vector<vector<int>> three_sum(vector<int> a,int target){
int n = a.size();
sort(a.begin(),a.end());
vector <vector <int>> ans;
for(int i = 0 ; i<n ; i++){
	if(i!=0 and a[i]==a[i-1])
		continue;
int choosen = a[i];
int rem_target = target-a[i];
int j,k;
bool found = two_sum(a,rem_target,j,k,choosen);
if(found){
	vector <int> temp = {a[i],a[j],a[k]};
	ans.push_back(temp);
}
}
return ans;


}

int main(){

int n; cin>>n;
vector <int> a;
for(int i = 0 ; i<n; i++){
	int temp; cin>>temp;
	a.push_back(temp);
}
int target; cin>>target;
vector <vector<int>> ans = three_sum(a,target);
for(int i = 0 ; i<ans.size() ; i++){
	for(int j = 0 ;j<ans[i].size() ; j++)
		cout<<ans[i][j]<<" ";
	cout<<endl;
}

}