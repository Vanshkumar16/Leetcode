class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int r = n - 1;
        int cols = 0;
        int low = matrix[0][0];
        int high = matrix[n - 1][n - 1];
        while (low < high) {
            int mid = low + (high - low) / 2;
            int count=counting(matrix,mid);
            if (count < k) {
                low = mid + 1;
            } else {
                high = mid;
            }  
        }
        return low;
    }
    int counting(vector<vector<int>>&matrix,int x){
        int n=matrix.size();
        int r=n-1;
        int cols=0; 
        int count = 0;
        while (r >= 0 && cols < n) {
            if (matrix[r][cols] <= x) {
                count += r + 1;
                cols++;
            }else{
                r--;
            }
        }
        return count;
    }
};