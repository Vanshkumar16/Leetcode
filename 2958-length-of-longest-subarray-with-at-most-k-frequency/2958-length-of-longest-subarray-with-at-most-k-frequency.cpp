class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        map<int ,int>freq;
        int left=0;
        int count=0;
        for(int right=0;right<n;right++){
            freq[nums[right]]++;
            while(freq[nums[right]]>k){
                freq[nums[left]]--;
                left++;
            }
            count=max(count,right-left+1);
        }
        return count;
    }
};