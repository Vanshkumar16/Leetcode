class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<n-1;i+=2){
            int mini=min(nums[i],nums[i+1]);
            ans+=mini;
        }
        return ans;
    }
};