class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n=nums.size();
        int ans=2;
        int product=1;
        int start=0,end=0;
        while(end<n){
            while(gcd(product,nums[end])>1){
                product/=nums[start];
                start++;
            }
            product*=nums[end];
            ans=max(ans,end-start+1);
            end++;
        }
        return ans;

    }
};