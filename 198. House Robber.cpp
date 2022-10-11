class Solution {
//Memorization(DP)
// public: 
//     int f(int ind, vector<int> &nums, vector<int> &dp){
//         if(ind==0) return nums[ind];
//         if(ind<0) return 0;
//         if(dp[ind]!=-1) return dp[ind];
        
//         int pick = nums[ind] + f(ind-2, nums, dp);
//         int notpick = 0 + f(ind-1, nums, dp);
        
//         return dp[ind] = max(pick, notpick);
//     }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        //Tabulation(DP)
        // vector<int> dp(n,0);
        // dp[0]=nums[0];
        // int neg = 0;
        // for(int i=1; i<n; i++){
        //     int take = nums[i];
        //     if(i>1) take+=dp[i-2];
        //     int nottake = 0 + dp[i-1];
        //     dp[i] = max(take, nottake);
        // }
        int prev2 = 0;
        int prev = nums[0];
        for(int i=1; i<n; i++){
            int take = nums[i];
            if(i>1){
                take+=prev2;
            }
            int notake = 0 + prev;
            int cur= max(take, notake);
            prev2 = prev;
            prev = cur;
        }
        return prev;
    }
};
