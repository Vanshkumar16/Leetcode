class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        // int t=nums[0];
        bool flag =false;
        int ans=0;
        for(auto it:nums){
            ans^=it;
            if(it!=0){
                flag =true;
            }
        }
        if(!flag){
            return 0;
        }
        // for(int i=1;i<n;i++){
        //     int w=t^nums[i];
        //     ans^=w;
        // }
        if(ans!=0){
            return n;
        }
        return n-1;
        
    }
};