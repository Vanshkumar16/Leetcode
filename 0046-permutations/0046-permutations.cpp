class Solution {
public:
    void backtrack(int idx,vector<int>&nums,vector<vector<int>>&a){
        if(idx==nums.size()){
            a.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[idx],nums[i]);
            backtrack(idx+1,nums,a);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>a;
        backtrack(0,nums,a);
        return a;

    }
};