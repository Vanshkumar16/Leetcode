class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int rows=grid.size();
        int cols=grid[0].size();
        int size=rows*cols;
        k=k%size;
        vector<vector<int>>ans(rows,vector<int>(cols));
        for(int i=0;i<rows;++i){
            for(int j=0;j<cols;++j){
                int newind=i*cols+j+k;
                int newrow=(newind/cols)%rows;
                int newcols=newind %cols;
                ans[newrow][newcols]=grid[i][j];
            }
        }
        return ans;
    }
};