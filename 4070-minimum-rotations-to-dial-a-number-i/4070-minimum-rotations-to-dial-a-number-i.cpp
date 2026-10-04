class Solution {
public:
    int minRotations(string s) {
        int ans=0;
        int curr=0;

        for(char c:s){
            int target=c-'0';
            int diff=abs(curr-target);
            ans+=min(diff,10-diff);
            curr=target;
        }
        return ans;
    }
};