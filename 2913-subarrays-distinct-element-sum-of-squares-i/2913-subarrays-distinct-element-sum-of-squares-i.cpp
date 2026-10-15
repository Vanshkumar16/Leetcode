class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        // unordered_set<int>freq;
        int ans=0;
        for(int i=0;i<n;i++){
            bitset<101>freq;
            for(int j=i;j<n;j++){
                freq.set(nums[j]);
                ans+=freq.count()*freq.count();
            }
        }
        return ans;
    }
};