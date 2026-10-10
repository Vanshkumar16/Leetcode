class Solution {
public:
    bool palindrome(string s){
        int n=s.size();
        int l=0;
        int r=n-1;
        while(l<=r){
            if(s[l]!=s[r])return false;
            l++;
            r--;
        }
        return true;
    }
    void back(int idx,string s,vector<vector<string>>&ans,vector<string>subset){
        if(idx==s.length()){
            ans.push_back(subset);
            return ;
        }
        for(int i=idx;i<s.size();i++){
            if(palindrome(s.substr(idx,i-idx+1))){
                subset.emplace_back(s.substr(idx,i-idx+1));
                back(i+1,s,ans,subset);
                subset.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>subset;

        back(0,s,ans,subset);
        return ans;

    }
};