class Solution {
public:
    long long countNonDecreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        long long ans=0;
        long long ops=0;
        priority_queue<pair<int,int>>q;
        vector<vector<int>>cnt(n);
        vector<int>pos(n,n);
        stack<int>st;
        for(int i=0,j=0;j<n;j++){
            while(!st.empty() && nums[j]>=nums[st.top()]){
                pos[st.top()]=j;
                st.pop();
            }
            if(!st.empty()){
                cnt[st.top()].push_back(j);
            }
            st.push(j);
            q.emplace(nums[j],j);
            ops+=max(0,q.top().first - nums[j]);
            while(ops>k){
                for(int c:cnt[i]){
                    ops-=(long long)(nums[i]-nums[c])*(min(pos[c],j+1)-c);
                }
                i++;
            }
            while(!q.empty()&&q.top().second<i){
                q.pop();
            }
            ans+=j-i+1;

        }
        return ans;
    }
};