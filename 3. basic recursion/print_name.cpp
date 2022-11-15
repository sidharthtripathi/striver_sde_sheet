#include <iostream>
#include <cmath>
using namespace std;
void print_name(int n , string name ){
if(n==0) return;
print_name(n-1,name);
cout<<name<<endl;

}
int main(){
int n; cin>>n;
string name; cin>>name;
print_name(n,name);
}