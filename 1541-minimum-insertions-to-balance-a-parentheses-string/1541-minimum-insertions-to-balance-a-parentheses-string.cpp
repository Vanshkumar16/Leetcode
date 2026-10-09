class Solution {
public:
    int minInsertions(string s) {
        int n=s.size();
        int idx=0;
        // stack<int>s;
        int count=0;
        int count2=0;
        while(idx<n){
            char c=s[idx];
            if(c=='('){
                idx++;
                count++;
            }else{
                if(count>0){
                    count--;
                }
                else{
                    count2++;
                }
                if(idx<n-1  && s[idx+1]==')'){
                    idx+=2;
                }else{
                    count2++;
                    idx++;
                }
            }
        }
        count2 += count*2;
        return count2;
        
    }
};