class Solution {
public:
    int arrangeCoins(int n) {
        long long left=0;
        long long right=n-1;
        if(n==1 || n==2){
            return 1;
        }
        long long ans=0;
        while(left<=right){
            long long mid=left+(right-left)/2;
            long long used=mid*(mid+1)/2;
            if(used<=n){
                ans=mid;
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return ans;
    }
};