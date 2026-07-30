class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int ans=0;
        if(n<=8){
            ans= n;
        }else if(n>8 && n<=16){
            ans=n-8;
            return 8+2*ans;
        }else if(n>16 && n<=24){
            ans=n-16;
            int result=24+3*ans;
            return result;
        }else{

            return 48+4*(n-24);
        }
        return ans;
    }
};