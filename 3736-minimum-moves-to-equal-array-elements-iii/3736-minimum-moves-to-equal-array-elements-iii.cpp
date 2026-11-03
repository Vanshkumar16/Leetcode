class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long ans=0;
        for(int i=0;i<n-1;i++){
            ans+=(nums[n-1]-nums[i]);
        }
        return ans;
    }
};