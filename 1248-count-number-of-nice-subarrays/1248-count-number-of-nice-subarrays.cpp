class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        int ans=0;
        map<int,int>freq;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                nums[i]=0;
            }else{
                nums[i]=1;
            }
        }
        freq[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            ans+=freq[sum-k];
            freq[sum]++;
        }
        return ans;
    }
};