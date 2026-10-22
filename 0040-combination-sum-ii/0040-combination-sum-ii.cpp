class Solution {
public:
    vector<vector<int>>ans;
    void solve(int idx,vector<int>&subset,vector<int>&candidates,int target,int sum){
        int n=candidates.size();
        
        if(target==sum){
            ans.push_back(subset);
            return ;
        }
        else if(sum>target){
            return;
        }
        for(int i=idx;i<n;i++){
            if(i != idx && candidates[i]==candidates[i-1]) continue;

            sum+=candidates[i];
            subset.push_back(candidates[i]);
            
            solve(i+1,subset,candidates,target,sum);
            sum-=candidates[i];
            subset.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int sum=0;
        vector<int>subset;
        sort(candidates.begin(),candidates.end());
        solve(0,subset,candidates,target,0);
        return ans;
    }
};