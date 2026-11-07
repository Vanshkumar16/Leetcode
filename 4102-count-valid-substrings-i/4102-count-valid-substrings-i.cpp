class Solution {
public:
    long long countValidSubstrings(string s) {
        int n=s.size();
        int valid=-1;
        long long count=0;
        for(int i=0;i<n;i++){
            if(i>=2 && s[i-2]=='a' && s[i-1]=='b' && s[i]=='c'){
                valid=max(valid,i-2);
            }
            count+=(i-valid);
        }
        return count;
    }
};