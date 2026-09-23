class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int ans=0;
        for(int num:nums){
            ans+=num;
        }
        int target=ans-x;
        if(target<0)return -1;
        if(target==0)return nums.size();
        int left=0;
        int curr=0;
        int maxlen=-1;
        for(int i=0;i<n;i++){
            curr+=nums[i];
            while(left<=i && curr>target){
                curr-=nums[left];
                left++;
            }
            if(curr == target){
                maxlen=max(maxlen,i-left+1);
            }
        }

        return maxlen==-1? -1 : n-maxlen;


    }
};