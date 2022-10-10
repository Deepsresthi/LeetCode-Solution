class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if(n==0) return intervals;
        vector<vector<int>> answerArray;
        sort(intervals.begin(), intervals.end());
        vector<int> tempInterval = intervals[0];
        for(auto it: intervals){
            if(it[0] <= tempInterval[1]) tempInterval[1] = max(it[1], tempInterval[1]); 
            else{
                answerArray.push_back(tempInterval);
                tempInterval = it;
            }
        }
        answerArray.push_back(tempInterval);
        return answerArray; 
    }
};
