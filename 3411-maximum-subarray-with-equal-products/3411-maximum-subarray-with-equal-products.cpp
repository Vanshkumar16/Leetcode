class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            long long product=nums[i];
            long long gcdval=nums[i];
            long long lcmval=nums[i];
            for(int j=i+1;j<nums.size();j++){
                product*=nums[j];
                gcdval=gcd(gcdval,nums[j]);
                lcmval=lcm(lcmval,nums[j]);
                if(product>gcdval*lcmval){
                    break;
                }
                if(product==gcdval*lcmval){
                    ans=max(ans,j-i+1);
                }
            }
        }
        return ans;

    }
};