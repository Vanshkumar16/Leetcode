class Solution {
public:
    string removeOuterParentheses(string s) {
        int ans=0;
        string res;
        for(auto c:s){
            if(c==')'){
                ans--;
            }
            if(ans){
                res.push_back(c);
            }
            if(c=='('){
                ans++;
            }
        }
        return res;
    }
};