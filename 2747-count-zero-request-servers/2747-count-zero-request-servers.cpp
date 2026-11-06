class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        int m=queries.size();
        vector<int>arr(m,0);
        sort(logs.begin(), logs.end(), [&](vector<int> &a, vector<int> &b) {
            return a[1] < b[1]; 
        }); 
        vector<pair<int, int>> q; 
        for(int i=0;i<m;i++)q.push_back({queries[i],i});
        sort(q.begin(),q.end());
        unordered_map<int,int>mp;
        int l=0;
        int r=0;
        for(int i=0;i<m;i++){
            int st=q[i].first-x;
            int en=q[i].first;
            while(r<logs.size() && logs[r][1]<=en ){
                mp[logs[r][0]]++;
                r++;
            }
            while(l<r && logs[l][1]<st){
                mp[logs[l][0]]--;
                if(mp[logs[l][0]]==0)mp.erase(logs[l][0]);
                l++;
            }
            arr[q[i].second]=n-mp.size();
        }
        return arr;
    }
};