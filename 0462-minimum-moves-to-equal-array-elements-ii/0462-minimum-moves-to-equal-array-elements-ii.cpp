class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int med=nums[n/2];
        long long cost=0;
        for(int num:nums){
            cost+=abs(med-num);
        }
        return cost;
    }
};