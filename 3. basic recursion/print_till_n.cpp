#include <iostream>
#include <cmath>
using namespace std;
void print_till_n(int n){
if(n==0) return;
print_till_n(n-1);
cout<<n<<endl;

}
int main(){
int n; cin>>n;
print_till_n(n);
}