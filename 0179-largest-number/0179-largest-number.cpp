class Solution {
public:
    static bool comp(string a,string b){
        string s1=a+b;
        string s2=b+a;
        return s1>s2;
    }
    string largestNumber(vector<int>& nums) {
        int n=nums.size();
        vector<string>s;
        for(auto i:nums){
            s.push_back(to_string(i));
        }
        sort(s.begin(),s.end(),comp);
        string ans="";
        if(s[0]=="0")return "0";
        for(auto i:s){
            ans+=i;
        }
        return ans;
    }
};