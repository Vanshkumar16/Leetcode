class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n);
        vector<int>sorted;

        for(int i=n-1;i>=0;i--){
            auto it =lower_bound(sorted.begin(),sorted.end(),nums[i]);
            arr[i]=distance(sorted.begin(),it);
            sorted.insert(it,nums[i]);
        }
        return arr;
    }
};