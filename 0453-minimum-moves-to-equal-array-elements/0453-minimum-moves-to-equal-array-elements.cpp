class Solution {
public:
    long long minMoves(vector<int>& nums) {
        long long n=nums.size();
        long long sum=0;
        long long mini=nums[0];
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(nums[i]<mini){
                mini=nums[i];
            }
        }
        return sum-(n*mini);
    }
};