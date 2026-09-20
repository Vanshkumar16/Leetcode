class Solution {
public:
    int reverseDegree(string s) {
        int n=s.length();
        int ans=0;
        // pair<int ,int>freq(26,1);
        for(int i=1;i<=n;i++){
            ans+=(26-(s[i-1]-'a'))*i;
        }
        return ans;

    }
};