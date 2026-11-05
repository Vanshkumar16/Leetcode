class Solution {
public:
    bool solve(int i,string&s,int j,string &p){
        int n=s.size();
        int m=p.size();
        if(j==m)return i==n;
        bool first=(i<n && (s[i]==p[j] || p[j]=='.'));
        bool ans=false;
        if(j+1<p.size() &&  p[j+1]=='*'){
            ans=solve(i,s,j+2,p) || (first && solve(i+1,s,j,p));
        }else{
            ans=first && solve(i+1,s,j+1,p);
        }
        return ans;
    }
    bool isMatch(string s, string p) {
        return solve(0,s,0,p);
    }
};