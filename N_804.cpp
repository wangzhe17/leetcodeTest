class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) 
    {
        vector<string> morse{".-","-...","-.-.","-..",".","..-.",
        "--.","....","..",".---","-.-",".-..","--","-.","---",".--.",
        "--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> s;
        for(string word : words)
        {
        	string t = "";
        	for(char c : word) t += morse[c - 'a'];
        	s.insert(t);
        }
        return s.size();
    }
};