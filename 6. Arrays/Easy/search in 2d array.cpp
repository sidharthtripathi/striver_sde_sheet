void search_in_2d(vector <vector<int>> a, int k){
	int max_counter = 0, int row = 0;
	for(int i = 0 ; i<a.size() ; i++){
		for(int j = 0  ; j<a[0].size() ; j++){
			if(a[i][j]==k)
				cout<<"found at: "<<i<<","<<j;
			return;
			}
			cout<<"Not found";

}