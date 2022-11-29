    bool isAnagram(string s1, string s2){
    	if(s1 == s2)
		return true;
	if(s1.length()!=s2.length())
		return false;
	map <char,int> c;
	for(int i = 0 ; i< s1.length() ; i++){
		if(c.find(s1[i])!=c.end()){
			c.find(s1[i])->second++;
		}
		else{
			c.insert({s1[i],1});
		}

	}

	for(int i = 0 ; i<s2.length() ; i++){
		if(c.find(s2[i])==c.end())
			return false;
		else{
			c.find(s2[i])->second++;
		}
	}
	for(auto &i : c){
		if(i.second%2==1)
			return false;
	}
	return true;
        
    }