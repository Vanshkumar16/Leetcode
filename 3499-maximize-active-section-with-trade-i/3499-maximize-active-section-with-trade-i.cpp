class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n=s.length();
        int cnt1=count(s.begin(),s.end(),'1');
        vector<int>zeroblock;
        int i=0;
        while(i<n){
            int start=i;
            while(i<n && s[i]==s[start]){
                i++;
            }
            if(s[start]=='0'){
                zeroblock.push_back(i-start);
            }
        }
        int m=zeroblock.size();
        if(m<2){
            return cnt1;
        }
        
        int biggain=0;
        for(int i=0;i<m-1;i++){
            biggain=max(biggain,zeroblock[i]+zeroblock[i+1]);
        }
        return cnt1+biggain;
    }
};