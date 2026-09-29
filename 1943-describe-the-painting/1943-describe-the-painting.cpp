class Solution {
public:
    vector<vector<long long>> splitPainting(vector<vector<int>>& segments) {
        map<int ,long long>mix_change;
        for(auto &seg:segments){
            int start=seg[0];
            int end=seg[1];
            int color=seg[2];
            mix_change[start]+=color;
            mix_change[end]-=color;
        }
        vector<vector<long long>>result;
        long long curr=0;
        long long prev=0;
        for(auto& [point,change] : mix_change){
            if(prev!=0 && curr>0){
                result.push_back({prev,point,curr});
            }
            curr+=change;
            prev=point;
        }
        return result;
    }
};