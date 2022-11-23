class Solution {
public:
    string reverseWords(string s) {
        		if(s.size()==0)
			return s;
	int i = s.length() - 1;
	while(i>=0 and s[i]==' ')
		i--;
	int word_len = 0;
	while(i>=0 and s[i]!=' '){
		word_len++;
		i--;

	}
	string fw = s.substr(i+1,word_len) + " ";
	string reverse = fw + reverseWords(s.substr(0,i+1));
	int j = reverse.size()-1;
	while(j>=0 and reverse[j]==' ')
		j--;
	return reverse.substr(0,j+1);
        
    }
};