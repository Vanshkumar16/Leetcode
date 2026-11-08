class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    bool communicate=false;
                    for(int k=0;k<m;k++){
                        if(k!=j && grid[i][k]==1){
                            communicate=true;
                            break;
                        }
                    }
                    if(communicate){
                        count++;
                    }else{
                        for(int k=0;k<n;k++){
                            if(k!=i && grid[k][j]==1){
                                communicate=true;
                                break;
                            }
                        }
                        if(communicate){
                            count++;
                        }
                    }
                }
            }
        }
        return count;
    }
};