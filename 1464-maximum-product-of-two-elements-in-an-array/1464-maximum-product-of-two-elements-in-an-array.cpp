class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int max_val=nums[n-1];
        int second_val=nums[n-2];
        return (max_val -1)*(second_val -1);
    }
};