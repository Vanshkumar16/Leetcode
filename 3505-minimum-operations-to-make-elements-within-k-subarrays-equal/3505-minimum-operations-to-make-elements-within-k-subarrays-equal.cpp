class Solution {
public:
    long long minOperations(vector<int>& nums, int x, int k) {
        int n=nums.size();
        multiset<int>low,high;
        long long sumlow=0,sumhigh=0;

        auto balance=[&]{
            while(low.size()>high.size()+1){
                auto it=prev(low.end());
                int value=*it;
                low.erase(it);
                sumlow-=value;
                high.insert(value);
                sumhigh+=value;
            }
            while(low.size()<high.size()){
                auto it =high.begin();
                int value=*it;
                high.erase(it);
                sumhigh-=value;
                low.insert(value);
                sumlow+=value;
            }
        };
        auto add = [&](int value){
            
            //The largest value in low is our median.
            if(low.empty() || value <= *low.rbegin()){
                low.insert(value);
                sumlow += value;
            }
            else{
                high.insert(value);
                sumhigh += value;
            }

            balance();
        };
        auto remove = [&](int value){
            //Remove only one occurence of the outgoing value.
            auto it = low.find(value);

            if(it != low.end()){

                low.erase(it);
                sumlow -= value;
            }
            else{
                high.erase(high.find(value));
                sumhigh -= value;
            }

            balance();
        };
        vector<long long> cost(n-x+1);

        for(int i = 0; i < n; i++){
            
            //Add the new element entering the window
            add(nums[i]);

            if(i >= x){//Remove the old element if the window exceeds size x.
                remove(nums[i-x]);
            }

            if(i >= x - 1){//Calc. const once we have a complete window.
                long long median = *low.rbegin();

                //Increase the smaller elements to the median:
                // median * no. of smaller elements - their sum.
                long long leftCost = median * static_cast<long long>(low.size()) - sumlow;

                //Decrease larger elements to the median :
                //their sum - median* no. of larger elements
                long long rightCost = sumhigh - median * static_cast<long long>(high.size());

                int start = i - x + 1;
                cost[start] = leftCost + rightCost;
            }
        }

        const long long INF = LLONG_MAX / 4;
        

        //previous[i] : cost for t-1 windows in the first i elements
        // Base case: selecting 0 subarrays costs 0.
        vector<long long> previous(n+1, 0);
        vector<long long> current(n+1, INF);

        for(int t = 1; t <= k; t++){
            //Start with every state marked impossible.
            fill(current.begin(), current.end(), INF);

            for(int i = 1; i <= n; ++i){

                //Choice-1: skip the last element
                current[i] = current[i-1];

                //Choice-2: take the window [i-x, i-1]
                if(i >= x){
                    int start = i - x;

                    //Earlier subarrays must use only the first
                    //'start' elements, so they can't overlap
                    //the selected window [start....i-1].
                    long long take = previous[start] + cost[start];

                    current[i] = min(current[i], take);
                }
            }
            // This row becomes the previous row for the next t.
            previous.swap(current);
        }
        
        // Minimum cost for exactly k subarrays using all n elements.
        // Exactly k is sufficient to satisfy "at least k".
        return previous[n];
    }
};