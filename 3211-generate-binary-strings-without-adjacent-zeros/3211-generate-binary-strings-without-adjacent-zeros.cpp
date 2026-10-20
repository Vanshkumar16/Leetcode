class Solution {
public:
    void solve(int n,string s,vector<string>&ans){
        if(n==0){
            ans.push_back(s);
            return ;
        }
        if(s.empty() || s.back()=='1'){
        solve(n-1,s+'0',ans);
        solve(n-1,s+'1',ans);}
        else{
            solve(n-1,s+'1',ans);
        }
    }
    vector<string> validStrings(int n) {
        vector<string>ans;
        string s;
        solve(n,s,ans);
        return ans;
    }
};