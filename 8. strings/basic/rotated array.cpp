class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    void rotate(string &s){
	char c = s[0];
	for(int i = 0 ; i<s.length()-1 ; i++){
		s[i] = s[i+1];
	}
	s[s.length()-1] = c;
}
    bool areRotations(string s1,string s2)
    {
        // Your code here
        	if(s1.length() != s2.length())
		return false;
	if(s1 == s2)
		return true;
for(int i = 1 ; i<=s1.length() ; i++){
	rotate(s2);
	if(s1==s2)
		return true;
}
return false;
    }
};