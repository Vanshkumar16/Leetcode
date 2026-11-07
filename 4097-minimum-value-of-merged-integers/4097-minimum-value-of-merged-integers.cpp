class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n=nums.size();
        int merge=0;
        int mini=1e9+7;
        for(int i=0;i<n;i+=2){
            string mer=to_string(nums[i])+to_string(nums[i+1]);
            merge=stoi(mer);
            mini=min(mini,merge);
        }
        return mini;
    }
};