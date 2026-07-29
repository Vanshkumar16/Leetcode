class Solution {
public:
    const int MOD=1e9+7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>arr;
        for (int i = 0; i < n; ++i) {
            int currentSum = 0;
            for (int j = i; j < n; ++j) {
                currentSum += nums[j];
                arr.push_back(currentSum);
            }
        }
        sort(arr.begin(),arr.end());


        int count=0;
        for(int i=left-1;i<right;i++){
            count=(count+arr[i])%MOD;
        }
        return count%MOD;
    }
};