//Approach 1
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = (int)nums.size();
        int d = int(n/2);
        int count=1, i;
        for(i=0; i<n-1; i++){
            if(nums[i]==nums[i+1]){
                count++;
            }
            if(count>d){
                break;
            }
            if(nums[i]!=nums[i+1]){
                count=1;
            }
        }
        return nums[i];
        
    }
};

//Approach 2
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return nums[n/2];
    }
};
