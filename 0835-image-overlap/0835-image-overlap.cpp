class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n=img1.size();
        vector<pair<int,int>>p1,p2;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(img1[i][j]==1)p1.push_back({i,j});
                if(img2[i][j]==1)p2.push_back({i,j});
            }
        }
        map<pair<int, int>, int> count;
        int maxOverlap = 0;

        for (const auto& [r1, c1] : p1) {
            for (const auto& [r2, c2] : p2) {
                pair<int, int> shift = {r2 - r1, c2 - c1};
                count[shift]++;
                maxOverlap = std::max(maxOverlap, count[shift]);
            }
        }

        return maxOverlap;
    }
};