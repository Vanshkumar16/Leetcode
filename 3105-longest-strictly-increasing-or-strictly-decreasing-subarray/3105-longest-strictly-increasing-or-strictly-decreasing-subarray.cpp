class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int length=0;
        for(int i=0;i<n;i++){
            int curr=1;
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[j-1]){
                    curr++;
                }else{
                    break;
                }
            }length=max(length,curr);
        }
        for(int i=0;i<n;i++){
            int curr=1;
            for(int j=i+1;j<n;j++){
                if(nums[j]<nums[j-1]){
                    curr++;
                }else{
                    break;
                }
            }length=max(length,curr);
        }
        return length;
        
    }
};