#include <iostream>
using namespace std;
#include <vector>
void print_ComboSum(int index , int target , vector <int> &ans , int* ques , int n,vector <vector<int>> &f_ans){
    if(index==n){
        if(target==0){
           f_ans.push_back(ans);
            }
            return;
        }
    
    if(target>=ques[index]){
    ans.push_back(ques[index]);
    print_ComboSum(index,target-ques[index],ans,ques,n,f_ans);
    ans.pop_back();
    }
    print_ComboSum(index+1,target,ans,ques,n,f_ans);
}
int main(){
    int n;
    cin>>n;
    int* ques = new int[n];
    for(int i = 0 ; i<n; i++)
        cin>>ques[i];
    int target;
    cin>>target;
    vector <int> ans;
    vector <vector<int>> f_ans;
    print_ComboSum(0,target,ans,ques,n,f_ans);
    for(int i = 0 ; i<f_ans.size() ; i++){
        for(int j = 0 ; j<f_ans[i].size() ; j++){
            cout<<f_ans[i][j]<<" ";
        }
        cout<<endl;
    }


}

.................................................................................................


void print_combo_sum(int index , int* ques, int n ,int target ,vector<int> &ans){
    if(index == n){
        if(target==0){
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
        return;
    }
    if(ques[index]<=target){
        ans.push_back(ques[index]);
        print_combo_sum(index,ques,n,target-ques[index],ans);
        ans.pop_back();
    }
    print_combo_sum(index+1,ques,n,target,ans);

}