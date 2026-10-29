class Solution {
public:
    void solve(int idx,vector<int>&candidates,vector<int>&subset,int target,vector<vector<int>>&ans,int sum){
        int n=candidates.size();
        if(sum==target){
            ans.push_back(subset);
            return;
        }
        if(sum>target)return;
        for(int i=idx;i<n;i++){
            sum+=candidates[i];
            subset.push_back(candidates[i]);
            solve(i,candidates,subset,target,ans,sum);
            sum-=candidates[i];
            subset.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>>ans;
        vector<int>subset;
        int sum=0;
        solve(0,candidates,subset,target,ans,sum);
        return ans;

    }
};