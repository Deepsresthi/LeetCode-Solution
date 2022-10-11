class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n= nums.size();
        int i1=INT_MAX, i2=INT_MAX;
        for(int i=0; i<n; i++){
            if(nums[i]<=i1) i1=nums[i];
            else if(nums[i]<=i2) i2=nums[i];
            else return true;
        }
        return false;
    }
};
