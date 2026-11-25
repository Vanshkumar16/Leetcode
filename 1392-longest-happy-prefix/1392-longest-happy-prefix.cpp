class Solution {
public:
    string longestPrefix(string s) {
        int n=s.size();
        vector<int>a(n);
        int l=0;
        int i=1;
        while(i<n){
            if(s[i]==s[l]){
                a[i]=++l;
                i++;
            }else{
                if(l>0){
                    l=a[l-1];
                }else{
                    a[i]=0;
                    i++;
                }
            }
        }
        return s.substr(0,a.back());
    }
};