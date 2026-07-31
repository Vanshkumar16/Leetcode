class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        vector<int>freq(26,0);
        for(char c:word){
            freq[c-'a']++;
        }
        sort(freq.rbegin(),freq.rend());
        int push=0;
        for(int i=0;i<26;i++){
            if(freq[i]==0)break;
            int pushes=(i/8)+1;
            push+=freq[i]*pushes;
        }
        return push;
    }
};