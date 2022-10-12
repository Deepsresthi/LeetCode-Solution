class Solution {
// public:
//     bool jump(vector<int> &nums, int n, int ind, vector<bool> &dp){
//         if(ind==n-1) return true;

//         if(dp[ind]!=0) return dp[ind];

//         int pick = min(ind+nums[ind], n-1);

//         for(int i=ind+1; i<=pick; i++){
//             if(jump(nums, n, i, dp)){
//                 return dp[ind] = true;
//             }
//         }
//         return dp[ind]=false;
//     }
public:
    bool canJump(vector<int>& nums){
        int n=nums.size();
        vector<bool> dp(n, 0);

        dp[0]=true;
        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(dp[j] && j+nums[j]>=i){
                    dp[i]=true;
                    break;
                }       
            }           
        }
        return dp[n-1];
        }
};
