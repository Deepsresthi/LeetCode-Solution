class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> mp;
        vector<string> res;
        if(s.size()<10) return res;
        for(int i=0; i<=s.size(); i++){
            string substring = s.substr(i, 10);
            if(mp[substring]==1) res.push_back(substring);
            mp[substring]++;
        }
        return res;
    }
};      
