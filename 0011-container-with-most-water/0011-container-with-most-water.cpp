class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int max_area=0;
        int ans=0;
        while(i<=j){

            ans=min(height[i],height[j])*(j-i);
            max_area=max(max_area,ans);
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }
        return max_area;
    }
};