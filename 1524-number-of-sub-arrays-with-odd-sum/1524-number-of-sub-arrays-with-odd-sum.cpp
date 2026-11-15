class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        long long ans = 0;
        int n = arr.size();
        int odd=0;
        int even=1;
        int curr=0;
        for(auto num :arr){
            curr+=num;
            if(curr%2!=0){
                odd++;
                ans+=even;
            }else{
                ans+=odd;
                even++;
            }
        }
        return ans % MOD;
    }
};