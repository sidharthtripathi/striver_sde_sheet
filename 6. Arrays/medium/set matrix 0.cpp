#include <iostream>
using namespace std;
#include <vector>
void test(vector <vector <int>> &ques){
	int r[ques.size()],c[ques[0].size()];
	for(int i = 0 ; i<ques.size() ; i++){
		for(int j = 0 ; j<ques[0].size() ; j++){
			if(ques[i][j]==0){
					r[i] = 0;
					c[j] = 0;
			}
		}
	}
	for(int i = 0 ; i<ques.size() ; i++){
		for(int j = 0 ; j<ques[0].size() ; j++){
			if(r[i] ==0 or c[j]==0){
				ques[i][j] = 0;
			}
		}
	}
}
int main(){
	
vector <vector <int >> ques;
int n,m; cin>>n>>m;
for(int i = 0 ; i<n; i++){
	vector <int> tempo;
	for(int j = 0 ; j<m ; j++){
		int temp;cin>>temp;
		tempo.push_back(temp);

	}
	ques.push_back(tempo);
}
test(ques);
for(int i = 0 ; i<n; i++){
	for(int j = 0 ; j<m ; j++){
		cout<<ques[i][j]<<" ";
		}
		cout<<endl;
}


}