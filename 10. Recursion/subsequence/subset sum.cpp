void sub_set_sum(int* ques , int n ,int index, int sum , vector<int> &ans){
    if(index == n){
        ans.push_back(sum);
        return;
    }
    sub_set_sum(ques,n,index+1,sum+ques[index],ans);
    sub_set_sum(ques,n,index+1,sum,ans);


}