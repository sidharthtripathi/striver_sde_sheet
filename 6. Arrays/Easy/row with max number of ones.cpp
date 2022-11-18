	int max_counter = 0, row = 0;
	for(int i = 0 ; i<n ; i++){
		int counter = 0;
		for(int j = 0  ; j<m ; j++){
			if(a[i][j] == 1){
				counter++;
				if(counter>max_counter){
					max_counter = counter;
					row = i;

				}
			}
		}
	}
	if(max_counter = 0)
	return -1;
	else
	return row;