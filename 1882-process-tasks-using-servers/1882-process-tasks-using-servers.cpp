class Solution {
public:
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
        int n=servers.size();
        int m=tasks.size();
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> busy;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> idle;

        for (int i = 0; i < (int)servers.size(); i++) {
            idle.push({servers[i], i});
        }
        long long t=0;
        vector<int>ans(m);
        auto release=[&](long long time){
            while(!busy.empty() && busy.top().first <=time){
                int idx=busy.top().second;
                busy.pop();
                idle.push({servers[idx],idx});
            }
        };
        for(int i=0;i<m;i++){
            t=max(t,(long long)i);
            release(t);
            if(idle.empty()){
                t=busy.top().first;
                release(t);
            }
            int idx=idle.top().second;
            idle.pop();
            ans[i]=idx;
            busy.push({t+tasks[i],idx});
        }
        return ans;
    }
};