class Solution {
public:
    bool checkValidString(string s) {
        int n=s.length();
        stack<int>open;
        stack<int>asterisks;
        for(int i=0;i<n;i++){
            char c=s[i];
            if(c=='('){
                open.push(i);
            }else if(c=='*'){
                asterisks.push(i);
            }else{
                if(!open.empty()){
                    open.pop();
                }else if(!asterisks.empty()){
                    asterisks.pop();
                }else{
                    return false;
                }
            }
        }
        while(!open.empty() && !asterisks.empty()){
            if(open.top()>asterisks.top()){
                return false;}
                open.pop();
                asterisks.pop();
            
        }
        return open.empty();
    }
};