class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int i=0;
        int j=(m*n)-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            int midval=matrix[mid/m][mid%m];
            if(midval==target){
                return true;
            }else if(midval<target){
                i=mid+1;
            }else{
                j=mid-1;
            }
        }
        return false;
    }
};