class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>>ans;
        int n=s1.length();
        int i=0;
        while(i<n){
            if(s1[i]!=s2[i]){
                int start=i;
                while(i<n && s1[i]!=s2[i]){
                    i++;
                }
                int length=i-start;
                string sub1=s1.substr(start,length);
                string sub2=s2.substr(start,length);
                ans.push_back({sub1,sub2});
            }else{i++;}
        }
        return ans;
    }
};