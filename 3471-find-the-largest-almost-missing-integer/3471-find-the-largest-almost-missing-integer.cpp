class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int ,int>freq;
        for(int i=0;i<=n-k;i++){
            unordered_set<int>unique;
            for(int j=i;j<i+k;j++){
                unique.insert(nums[j]);
            }
            for(auto num:unique){
                freq[num]++;
            }
        }
        int result=-1;
        for(auto&[num,count]:freq){
            if(count==1){
                result=max(result,num);
            }
        }
        return result;
    }
};