class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return 1;
        if(n==2|| n==3)return 2;
        int maxi=max_element(nums.begin(),nums.end())-nums.begin();
        int mini=min_element(nums.begin(),nums.end())-nums.begin();
        int l=min(mini,maxi);
        int r=max(mini,maxi);
        return min({r+1,n-l,l+1+n-r});

    }
};