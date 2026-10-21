class Solution {
public:
    void solve(string digits,int i,string output,vector<string>&a,vector<string>&mapping){
        if(i==digits.size()){
            a.push_back(output);
            return;
        }
        for(auto &it:mapping[digits[i]-'0']){
            solve(digits,i+1,output+it,a,mapping);
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string>a;
        int n=digits.length();
        if(n==0)return a;
        vector<string >mapping {"",    "",    "abc",  "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string output;
        int i=0;
        solve(digits,i,output,a,mapping);
        return a;
    }
};