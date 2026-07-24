class Solution {
public:
    int makeArrayIncreasing(vector<int>& arr1, vector<int>& arr2) {
        sort(arr2.begin(),arr2.end());
        arr2.erase(unique(arr2.begin(),arr2.end()),arr2.end());

        map<int,int>states={{0,-1}};
        for(auto x :arr1){
            map<int,int>next;

            for(auto &[cost,prev] : states){
                if(x>prev){
                    if(!next.count(cost) || x<next[cost]){
                        next[cost]=x;
                    }
                }
                auto it =upper_bound(arr2.begin(),arr2.end(),prev);
                if(it!=arr2.end()){
                    int n=cost+1;
                    int v=*it;
                    if(!next.count(n) || v<next[n]){
                        next[n]=v;
                    }
                }
            }
            if(next.empty()){
                return -1;
            }
            states=move(next);
        }
        return states.begin()->first;
        
    }
};