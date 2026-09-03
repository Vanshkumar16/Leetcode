class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();
        int min_value=nums1[0];
        bool has_even=false;
        bool has_odd=false;
        for(int x:nums1){
            if(x<min_value){
                min_value=x;
            }
            if(x%2==0){
                has_even=true;
            }else has_odd=true;
        }
        if(!has_even || !has_odd){
            return true;
        }
        return min_value%2!=0;
    }
};