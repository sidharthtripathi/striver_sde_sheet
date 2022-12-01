#include <iostream>
using namespace std;
#include <vector>
bool issafe(vector<string> &test,int r,int c){
//for row testing
    int temp_r = r;
    int temp_c = c;
    for(int i = temp_c; i>=0 ; i--){
        if(test[r][i] == 'Q')
            return false;
    }

// for backward diagonal up
    temp_r = r;
    temp_c = c;
    while(temp_r>=0 and temp_c>=0){
        if(test[temp_r][temp_c]=='Q')
            return false;
        temp_r--;
        temp_c--;
    }
// for bakward diagonal down
    temp_r = r;
    temp_c = c;
    while(temp_r<test.size() and temp_c>=0){
        if(test[temp_r][temp_c]=='Q')
            return false;
        temp_r++;
        temp_c--;
    }
    return true;

}
// this is my recursive function
void solve(vector <string> &board, int n , int c ,vector <string> &ans){
if(c==n){
    ans = board;
    for(string i: ans)
        cout<<i<<endl;
    return;

}
    for(int i = 0 ; i<n ; i++){
        if(issafe(board,i,c)){
            board[i][c] = 'Q';
            solve(board,n,c+1,ans);
            board[i][c] = '.';
        }
    }

}
void n_queen(int n){
    string s(n,'.');
    vector <string> board(n,s);
    vector <string> ans;
    solve(board,n,0,ans);
    return;
}
int main(){
n_queen(4);
    


}