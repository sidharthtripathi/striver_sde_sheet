#include <bits/stdc++.h>
using namespace std;

void freq(int* a , int n ){
for(int i = 0 ; i<n;  i++){
	int count = 1;
	for(int j = 0 ; j<n ; j++){
		if(j!=i and a[j] == a[i]){
			count++;
		}
	}
	cout<<a[i]<<" "<<count<<endl;
}
}
void freq2(int* a , int n){
int f[n] = {0};
for(int i = 0 ; i<n ; i++){
	int count = 1;
	if(f[i]==-1)
		continue;
	for(int  j = i+1 ; j<n ; j++){
			if(a[j]==a[i]){
				count++;
				f[j] = -1;
			}
	}
	f[i] = count;
}
for(int i = 0 ; i<n; i++){
	if(f[i]!=-1){
		cout<<a[i] <<" "<<f[i]<<endl;
	}
}

}
 void freq3(int* a , int n){
map <int, int> frequecy;
for(int i = 0 ; i<n ; i++){
	if(frequecy.find(a[i])!=frequecy.end()){
		frequecy.find(a[i])->second++;
	}
	else{
		frequecy.insert({a[i],1});
	}
}
for(auto i : frequecy){
	cout<<i.first<<" "<<i.second<<endl;
}


 }

int main(){
int n; cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n; i++)
	cin>>a[i];
freq3(a,n);

}#include <bits/stdc++.h>
using namespace std;

void max_min_freq(int* a , int n){
	int max = INT_MIN, min = INT_MAX;
	int max_ele,min_ele;
	for(int i = 0 ; i<n; i++){
		int count = 0;
		for(int j = i ; j<n ; j++){
			if(a[j]==a[i]){
				count++;
			}
		}
		if(count>max){
			max = count;
			max_ele = a[i];
		}
		if(count<min){
			min = count;
			min_ele = a[i];
		}
	}

	cout<<max_ele<<" "<<min_ele;
}
// using maps
void max_min2(int* a , int n){
	map <int,int> freq;
	for(int i = 0 ; i<n ; i++){
		//pair <int,int> *it = freq.find(a[i]);
		if(freq.find(a[i])!=freq.end()){
			freq.find(a[i])->second++;
		}
		else{
			freq.insert({a[i],1});
		}
	}
	int max = INT_MIN, min = INT_MAX,max_ele,min_ele;
	for(auto i : freq){
		if(i.second>max){
			max_ele = i.first;
			max = i.second;
		}
		else if(i.second<min){
			min_ele = i.first;
			min = i.second;
		}
	}
	cout<<max_ele<<" "<<min_ele;
}

int main(){
int n; cin>>n;
int* a = new int[n];
for(int i = 0 ; i<n; i++)
	cin>>a[i];
max_min2(a,n);

}