class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, int> forpattern;
        unordered_map<string, int> forword;
        
        istringstream in(s); string word;
        int i = 0, n = pattern.size();

        
        for(word; in>>word; i++){
            if(i==n || forpattern[pattern[i]] != forword[word]) return false; 
            
            forpattern[pattern[i]] = forword[word] = i+1;
        }
        return i==n; 
    }
};
