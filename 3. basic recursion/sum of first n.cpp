#include <iostream>
#include <cmath>
using namespace std;
int sum_of_n(int n){
if(n==1) return 1;
return n + sum_of_n(n-1);

}
int main(){
int n; cin>>n;
cout<<sum_of_n(n);
}