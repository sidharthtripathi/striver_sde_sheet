#include <bits/stdc++.h>
using namespace std;
//assuming intervals are in sorted order
void fix_overlap(vector <pair <int,int>> &a){
	sort(a.begin(),a.end());
	stack <pair <int,int>> intervals;
	intervals.push(a[0]);
	for(int i = 1 ; i<a.size() ; i++){
		if(a[i].first <=intervals.top().second){
			// then mergin is to be done
			if(intervals.top().second < a[i].second){
					intervals.top().second = a[i].second;
			}
			
		}
		else
			intervals.push(a[i]);
	}
	while(intervals.size()!=0){
		cout<<intervals.top().first<<" "<<intervals.top().second<<endl;
		intervals.pop();
	}
}

int main(){
int n; cin>>n;
vector <pair <int,int>> a;
for(int i = 0 ; i<n; i++){
	pair <int,int> temp;
	cin>>temp.first>>temp.second;
	a.push_back(temp);
}
fix_overlap(a);

}