class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        if(n==0) return{};
        vector<int>sorted=arr;
        sort(sorted.begin(),sorted.end());
        sorted.erase(unique(sorted.begin(),sorted.end()),sorted.end());
        unordered_map<int,int>rank;
        for(int i=0;i<sorted.size();i++){
            rank[sorted[i]]=i+1;
        }
        for(int& num:arr){
            num=rank[num];
        }
        return arr;
    }
};