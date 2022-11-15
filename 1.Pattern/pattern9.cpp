    #include <iostream>
    using namespace std;
    void printDiamond(int n);
    int main(){
    	int n;
    	cin>>n;
    printDiamond(n);
    
    }
    void printDiamond(int n) {
        // code here
        int spc = n-1;
        int str = 1;
        for(int k = 1; k<=2 ; k++){
        for(int i = 1 ; i<=n ; i++){
            for(int j =1 ; j<=spc ; j++)
            cout<<" ";
            for(int j = 1; j<=str ; j++)
            cout<<"* ";
            if(k==1){
            str++;
            spc--;
            }
            else{
            str --;
            spc++;
            }
            cout<<endl;
        }
        str = n;
        spc = 0;
        }
    }