#include <iostream>
using namespace std;
#include <stack>
void sort(stack <int> &a){
	if(a.size() == 1)
		return;
// go and sort the bottom stack

	int temp = a.top();
	a.pop();
	sort(a);
// now once sorted, lets place the temp value to it's right place
	stack <int> t_stack;
	while(a.size()!=0 and temp<a.top()){
		t_stack.push(a.top());
		a.pop();
	}
	a.push(temp);
	while(t_stack.size()!=0){
		a.push(t_stack.top());
		t_stack.pop();
	}


}
int main(){
	
stack <int> a;
int n; cin>>n;
for(int i = 0 ; i<n ; i++){
	int temp; cin>>temp;
	a.push(temp);
}
sort(a);
while(a.size()!=0){
	cout<<a.top()<<" ";
	a.pop();
}

}