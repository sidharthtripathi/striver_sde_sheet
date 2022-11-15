#include <iostream>
#include <cmath>
using namespace std;
void print_hello(int n ){
if(n==0) return;
print_hello(n-1);
cout<<"hello"<<endl;

}
int main(){
int n; cin>>n;
print_hello(n);
}