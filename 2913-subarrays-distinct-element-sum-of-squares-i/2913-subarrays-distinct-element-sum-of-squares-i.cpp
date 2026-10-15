class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        // unordered_set<int>freq;
        int ans=0;
        for(int i=0;i<n;i++){
            unordered_set<int>freq;
            for(int j=i;j<n;j++){
                freq.insert(nums[j]);
                ans+=freq.size()*freq.size();
            }
        }
        return ans;
    }
};