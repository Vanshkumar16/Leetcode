class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int brackets=0;
        for(char c:s){
            if(c=='('){
                brackets++;
            }else if(c==')'){
                brackets--;
            }
            ans=max(ans,brackets);
        }
        return ans;
    }
};