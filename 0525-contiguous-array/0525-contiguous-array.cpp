class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum = 0;
        int ans = 0;
        map<int, int> cnt;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                sum -= 1;
            } else {
                sum += 1;
            }
            if (sum == 0) {
                ans = max(ans, i + 1);
            } else {
                if (cnt.find(sum) != cnt.end()) {
                    ans = max(ans, i - cnt[sum]);
                } else {
                    cnt[sum] = i;
                }
            }
        }
        return ans;
    }
};