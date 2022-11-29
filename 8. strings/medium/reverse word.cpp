    string reverseWords(string s) 
    { 
        // code here 
    int i = s.length()-1;
	string ans = "";
	while(i>=0){
		int j = i;
		while(s[i]!='.' and i>=0){
			i--;
		}
		ans = ans + s.substr(i+1,j-i) + ".";
		i--;
	}
	return ans.substr(0,ans.length()-1);
    }