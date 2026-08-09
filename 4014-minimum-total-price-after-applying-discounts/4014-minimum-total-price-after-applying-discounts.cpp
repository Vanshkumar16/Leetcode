class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        int n=prices.size();
        int m=discounts.size();
        sort(prices.rbegin(),prices.rend());
        sort(discounts.rbegin(),discounts.rend());
        double ans=0;
        if(n>m){
            for(int i=0;i<m;i++){
                double rem=prices[i]*(100-discounts[i]);
                ans+=rem/100.0;
            }
            for(int i=m;i<n;i++){
                ans+=prices[i];
            }
        }else{
            for(int i=0;i<n;i++){
                double rem=prices[i]*(100-discounts[i]);
                ans+=rem/100;
            }
        }
        return ans;
    }
};