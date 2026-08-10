class Solution {
public:
    bool perfectsquare(int n){
        long long root=round(sqrt(n));
        return root*root==n;
    }
    bool winnerSquareGame(int n) {
        if(perfectsquare(n)){
            return  true;
        }
        // if(n==2)return false;
        vector<bool> dp(n + 1, false);
        
        for (int i = 1; i <= n; ++i) {
            for (int k = 1; k * k <= i; ++k) {
                if (!dp[i - k * k]) {
                    dp[i] = true;
                    break; 
                }
            }
        }
        return dp[n];
    }
};