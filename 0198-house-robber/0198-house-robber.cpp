class Solution {
public:
    int rob(vector<int>& nums) {
        int pre1=0;
        int pre2=0;
        for(int num:nums){
            int current=max(pre2,pre1+num);
            pre1=pre2;
            pre2=current;
        }
        return pre2;
    }
};