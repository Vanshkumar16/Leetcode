class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>charmap;
        int maxlen=0;
        int left=0;
        for(int i=0;i<s.length();++i){
            char curr=s[i];
            if(charmap.find(curr) != charmap.end() && charmap[curr]>=left){
                left=charmap[curr]+1;
            }
            charmap[curr]=i;
            maxlen=max(maxlen,i-left+1);
        }
        return maxlen;
    }
};