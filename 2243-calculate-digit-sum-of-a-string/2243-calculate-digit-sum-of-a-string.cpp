class Solution {
public:
    string digitSum(string s, int k) {
        int n=s.size();
        string ans="";
        int sum=0;
        int count=0;
        while(s.size()>k){
            for(int i=0;i<s.size();i++){
                if(count==k){
                    count=0;
                    ans+=to_string(sum);
                    sum=0;
                }
                sum+=(s[i]-'0');
                count++;
                if(i+1>=s.size()){
                    ans+=to_string(sum);
                    sum=0;
                    count=0;
                }       
            }
            s=ans;
            ans="";
        }
        return s;

    }
};