class Solution {
public:
    int maxSelectedElements(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        sort(nums.begin(),nums.end());
        unordered_map<int,int>freq;
        for(int x:nums){
            freq[x+1]=max(freq[x+1],freq[x]+1);
            freq[x]=max(freq[x],freq[x-1]+1);
            count=max(count,max(freq[x+1],freq[x]));
        }
        return count;
    }
};