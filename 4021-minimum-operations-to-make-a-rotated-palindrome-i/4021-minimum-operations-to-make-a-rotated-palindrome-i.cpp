class Solution {
public:
    int cost(char c1,char c2){
        int cost1=(c1-c2+26)%26;
        int cost2=(c2-c1+26)%26;
        return min(cost1,cost2);
    }
    int minOperations(string s) {
        int ops=INT_MAX;
        int n=s.length();
        if(n<=1)return 0;
        string d=s+s;
        for(int i=0;i<n;++i){
            int curr_ops=i;
            int left=i;
            int right=i+n-1;
            while(left<right){
                curr_ops+=cost(d[left],d[right]);
                left++;
                right--;
            }
            ops=min(curr_ops,ops);
            
        }
        return ops;
    }
};