#include <bits/stdc++.h>
using namespace std;
string test(string s){
	int i = s.length()-1;
	while(i>=0){
		int num = s[i] - 48;
		if(num%2==1){
			return s.substr(0,i+1);
		}
		i--;
	}
	return "";
}
int main(){
cout<<test("5504");

}