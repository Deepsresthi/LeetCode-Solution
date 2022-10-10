class Solution {
public: 
    int minCost(vector<int> &cost, int ind, vector<int> &dp){
        if(ind==0) return cost[0];
        if(ind==1) return cost[1];
        if(dp[ind]!=-1) return dp[ind];
        dp[ind] = cost[ind] + min(minCost(cost, ind-1, dp), minCost(cost, ind-2, dp));

        return dp[ind];
    }
    
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1, -1);
        int ans = min(minCost(cost, n-1, dp), minCost(cost, n-2, dp));
        return ans;
    }
};
