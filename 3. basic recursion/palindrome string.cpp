#include <iostream>
using namespace std;
bool palindrome_string(string ques){
if(ques.length()==0 or ques.length()==1) return true;
string rest_string = ques.substr(1,ques.length()-2);
return (ques[0]==ques[ques.length()-1] and palindrome_string(rest_string));

}

int main(){
string s; cin>>s;
cout<<palindrome_string(s);
}