// using a freq array of size = largest element of array + 1
// as we found the values in array we go to index = value in the freq array 
// and increment the value ( stored in freq array ) by 1


void frequency(int* a , int n){
// creating a frequency array of size = largest element of array
	int max = a[0];
	for(int i = 1 ; i<n ; i++){
	if(a[i]>max)
		max = a[i];
	
	}
	int freq[max+1] = {};
	for(int i = 0 ; i<n; i++){
		freq[a[i]]++;
	}
	cout<<"freq of each element is: "<<endl;
	for(int i = 0 ; i<max+1 ; i++){
		if(freq[i]!=0){
			cout<<i<<": "<<freq[i]<<endl;
		}
	}
}

// solution using map is pending