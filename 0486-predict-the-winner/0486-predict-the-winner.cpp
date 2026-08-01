class Solution {
public:
    int score(vector<int>&nums,int left,int right){
        if(left==right)return nums[left];
        int take_left=nums[left]-score(nums,left+1,right);
        int take_right=nums[right]-score(nums,left,right-1);
        return max(take_left,take_right);
    }
    bool predictTheWinner(vector<int>& nums) {
        if(nums.size()%2==0)return true;
        return score(nums,0,nums.size()-1)>=0;
    }
};