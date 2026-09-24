class Solution {
public:
    int digitsum(int x){
        // int original=x;
        int result=0;
        while(x>0){
            int rem=x%10;
            result=result+rem;
            x/=10;
        }
        return result;
    }
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i == digitsum(nums[i])){
                return i;
            }
        }
        return -1;
    }
};