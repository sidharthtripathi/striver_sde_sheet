#include <iostream>
using namespace std;
#include <vector>
vector <int> pascal(int n){
	if(n==1){
		vector <int> base = {1};
		cout<<base[0]<<endl;
		return base;
	}
	vector <int> pre_tri = pascal(n-1);
	vector <int> tri = {1};
	cout<<tri[0]<<" ";
	for(int i = 0 ; i<pre_tri.size()-1 ; i++){
		cout<<pre_tri[i]+pre_tri[i+1]<<" ";
		tri.push_back(pre_tri[i]+pre_tri[i+1]);

	}
	tri.push_back(1);
	cout<<tri.back()<<endl;
	return tri;
}
int main(){
	
vector <int> ans = pascal(10);

}

//// simple approach
#include <iostream>
using namespace std;
#include <vector>
void pascal(int n){
	for(double i = 0 ; i<n ; i++){
			double ncrm1 = 1;
			
			cout<<ncrm1<<" ";
		for(double j = 1 ; j<=i ; j++){
			ncrm1 = (i-j+1)/j * ncrm1;
			cout<<ncrm1<<" ";
			}
		cout<<endl;
	}

}
int main(){
	
pascal(3);
}