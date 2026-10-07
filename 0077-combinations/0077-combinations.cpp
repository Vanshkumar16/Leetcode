class Solution {
public:
    void back(int curr,int n,int k,vector<int>&subset,vector<vector<int>>&result){

        if(subset.size()==k){
            result.push_back(subset);
            return;
        }
        for(int i=curr;i<=n;i++ ){
            subset.push_back(i);
            back(i+1,n,k,subset,result);
            subset.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>result;
        vector<int>subset;
        back(1,n,k,subset,result);
        return result;
    }
};