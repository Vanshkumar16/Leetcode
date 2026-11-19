class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int low=min(nums[n-1]-nums[2],nums[n-2]-nums[1]);
        int high=min(nums[n-3]-nums[0],low);
        return high;

    }
};